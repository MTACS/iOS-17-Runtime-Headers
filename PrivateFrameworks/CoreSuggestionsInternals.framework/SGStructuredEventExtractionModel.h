
@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken * _assetUpdateToken;
    NSDictionary * _engineConfig;
    NSDictionary * _inputMapping;
    NSDictionary * _outputMapping;
    NSDictionary * _supportedProviders;
}

+ (id)inputFromTaggedCharacterRanges:(id)arg1 usingInputMapping:(id)arg2 forModel:(id)arg3 pflTraining:(bool)arg4 hasEvent:(bool)arg5;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)addressComponentThreshold;
- (id)engineConfig;
- (id)gazetteer;
- (id)inputMapping;
- (bool)isSenderSupportedForExtraction:(id)arg1;
- (bool)isSenderSupportedForMLDefaultExtraction:(id)arg1;
- (bool)isSenderSupportedForPFLTraining:(id)arg1;
- (bool)isSenderSupportedForShadowExtraction:(id)arg1;
- (id)loadModel;
- (unsigned long long)maxMergeDistanceForSection:(id)arg1 label:(id)arg2;
- (id)modelInferences:(id)arg1;
- (id)modelInferences:(id)arg1 pflTraining:(bool)arg2 hasEvent:(bool)arg3;
- (id)outputMapping;
- (unsigned long long)stripRepeatedContentForSectionLength:(id)arg1 label:(id)arg2;
- (id)supportedProviders;
- (void)updateAll;

@end
