
@interface NUExportJob : NURenderJob

- (id)exportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;

@end
