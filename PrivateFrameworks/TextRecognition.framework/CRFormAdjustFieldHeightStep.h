
@interface CRFormAdjustFieldHeightStep : NSObject <CRFormPostProcessingStep> {
    double  _underlinedSignatureFieldHeightScaling;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)process:(id)arg1 externalFields:(id)arg2 document:(id)arg3 options:(id)arg4;

@end
