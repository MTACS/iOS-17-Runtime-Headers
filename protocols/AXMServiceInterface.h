
@protocol AXMServiceInterface <NSObject>

@required

- (void)prewarmVisionEngineService;
- (void)visionEngine:(void *)arg1 evaluateSource:(void *)arg2 context:(void *)arg3 options:(void *)arg4 result:(void *)arg5; // needs 5 arg types, found 11: AXMVisionEngine *, AXMSourceNode *, AXMVisionPipelineContext *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AXMVisionResult *, NSError *, void*

@end
