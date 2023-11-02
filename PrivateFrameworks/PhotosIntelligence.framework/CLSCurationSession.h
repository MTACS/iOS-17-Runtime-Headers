
@interface CLSCurationSession : NSObject {
    NSMutableDictionary * _curationModelBySpecification;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _curationModelBySpecificationLock;
}

+ (void)addAudioClassifications:(short)arg1 toAudioClassificationCounts:(id)arg2;
+ (short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg1 threshold:(double)arg2;
+ (void)enumerateSignalsFromAsset:(id)arg1 fullHierarchyName:(bool)arg2 usingBlock:(id /* block */)arg3;
+ (double)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+ (double)legacyAestheticScoreThresholdToBeAwesome;
+ (double)legacyAestheticScoreThresholdToNotBeJunk;
+ (id)scoringContextWithAssets:(id)arg1 aestheticScoreThresholdToBeAwesome:(double)arg2;

- (void).cxx_destruct;
- (id)_curationModelWithSpecification:(id)arg1;
- (id)curationModelForAsset:(id)arg1;
- (id)curationModelForItemInfo:(id)arg1 options:(id)arg2;
- (id)curationModelWithSpecification:(id)arg1;
- (id)init;
- (void)prepareAssets:(id)arg1;

@end
