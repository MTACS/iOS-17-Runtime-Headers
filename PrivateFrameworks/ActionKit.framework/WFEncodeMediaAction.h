
@interface WFEncodeMediaAction : WFAction {
    NSMutableArray * _exportSessions;
}

@property (nonatomic, retain) NSMutableArray *exportSessions;

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void).cxx_destruct;
- (void)cancel;
- (void)encodeItems:(id)arg1 metadata:(id)arg2;
- (id)exportSessions;
- (void)finishRunningWithError:(id)arg1;
- (void)getMetadataItems:(id /* block */)arg1;
- (void)initializeParameters;
- (id)metadataForAsset:(id)arg1 newMetadata:(id)arg2;
- (id)nonEmptyStringValueForKey:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setExportSessions:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateSpeedVisibility;

@end
