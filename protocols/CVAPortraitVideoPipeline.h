
@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>

@required

- (int)renderWithRequest:(void *)arg1 disparityPostprocessingCompletionHandler:(void *)arg2 mattingCompletionHandler:(void *)arg3 portraitCompletionHandler:(void *)arg4; // needs 4 arg types, found 22: <CVAPortraitRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CVADisparityPostprocessingRequest *, <CVADisparityPostprocessingResult> *, void*, id /* block */, void*, void, id /* block */, CVAMattingRequest *, <CVAMattingResult> *, void*, id /* block */, void*, void, id /* block */, <CVAPortraitRequest> *, <CVAPortraitResult> *, void*
- (int)renderWithRequest:(void *)arg1 requestTo:(void *)arg2 mixValue:(void *)arg3 destinationColorPixelBuffer:(void *)arg4 error:(void *)arg5 disparityPostprocessingCompletionHandler:(void *)arg6 mattingCompletionHandler:(void *)arg7 portraitCompletionHandler:(void *)arg8; // needs 8 arg types, found 27: <CVAPortraitGenericRequest> *, <CVAPortraitGenericRequest> *, float, struct __CVBuffer { }*, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CVADisparityPostprocessingRequest *, <CVADisparityPostprocessingResult> *, void*, id /* block */, void*, void, id /* block */, CVAMattingRequest *, <CVAMattingResult> *, void*, id /* block */, void*, void, id /* block */, <CVAPortraitGenericRequest> *, <CVAPortraitGenericRequest> *, <CVAPortraitResult> *, void*

@end
