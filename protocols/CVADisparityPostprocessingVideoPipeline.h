
@protocol CVADisparityPostprocessingVideoPipeline <CVAVideoPipeline>

@required

- (int)postprocessDisparityWithRequest:(CVADisparityPostprocessingRequest *)arg1;
- (int)postprocessDisparityWithRequest:(void *)arg1 disparityPostprocessingCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CVADisparityPostprocessingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CVADisparityPostprocessingRequest *, <CVADisparityPostprocessingResult> *, void*

@end
