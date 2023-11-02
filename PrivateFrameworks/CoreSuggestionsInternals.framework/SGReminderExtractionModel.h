
@interface SGReminderExtractionModel : SGExtractionModel {
    _PASNotificationToken * _assetUpdateToken;
    NSDictionary * _enrichments;
    NSDictionary * _inputTokenMapping;
    _PASLock * _lock;
    NSDictionary * _outputConfig;
    NSDictionary * _reminderOverrides;
}

+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)arg1 usingInputCharacterRanges:(id)arg2;
+ (id)inputFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_whitelistedVerbRangeInContent:(id)arg1;
- (void)dealloc;
- (id)enrichments;
- (bool)hasWhitelistedVerbInContent:(id)arg1;
- (id)inputTokenMapping;
- (id)loadModel;
- (id)modelDescription;
- (id)modelInferences:(id)arg1;
- (id)outputConfig;
- (id)reminderOverrides;
- (void)setReminderOverridesForTesting:(id)arg1;
- (void)updateAll;
- (id)whitelistedRangesInContent:(id)arg1;
- (id)whitelistedVerbInContent:(id)arg1;

@end
