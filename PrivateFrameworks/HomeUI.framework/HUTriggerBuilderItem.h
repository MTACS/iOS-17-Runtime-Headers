
@interface HUTriggerBuilderItem : HFItem <NSCopying> {
    unsigned long long  _naturalLanguageNameType;
    HFTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) unsigned long long naturalLanguageNameType;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

+ (id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2;
+ (id)settingsURLForForceDisableReasons:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_forceDisableReasons;
- (id)_resultsForTriggerConditions;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)_triggerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2;
- (unsigned long long)naturalLanguageNameType;
- (id)triggerBuilder;

@end
