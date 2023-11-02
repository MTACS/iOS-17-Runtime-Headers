
@interface HFTriggerUISummary : NSObject {
    NSString * _triggerDescription;
    NSString * _triggerDisplayTitle;
    <HFIconDescriptor> * _triggerIconDescriptor;
    NSString * _triggerName;
    bool  _triggerNameIsConfigured;
    NSString * _triggerNaturalLanguageTitle;
    NSArray * _triggerSummaryIconDescriptors;
    NSString * _triggerTitle;
    unsigned long long  _triggerType;
}

@property (nonatomic, readonly) NSString *triggerDescription;
@property (nonatomic, readonly) NSString *triggerDisplayTitle;
@property (nonatomic, readonly) <HFIconDescriptor> *triggerIconDescriptor;
@property (nonatomic, readonly) NSString *triggerName;
@property (nonatomic, readonly) bool triggerNameIsConfigured;
@property (nonatomic, readonly) NSString *triggerNaturalLanguageTitle;
@property (nonatomic, readonly) NSArray *triggerSummaryIconDescriptors;
@property (nonatomic, readonly) NSString *triggerTitle;
@property (nonatomic, readonly) unsigned long long triggerType;

- (void).cxx_destruct;
- (void)_getTriggerName:(id)arg1 home:(id)arg2;
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(bool)arg3 ignoringDisabled:(bool)arg4;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(bool)arg3;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(bool)arg3 ignoringDisabled:(bool)arg4;
- (id)triggerDescription;
- (id)triggerDisplayTitle;
- (id)triggerIconDescriptor;
- (id)triggerName;
- (bool)triggerNameIsConfigured;
- (id)triggerNaturalLanguageTitle;
- (id)triggerSummaryIconDescriptors;
- (id)triggerTitle;
- (unsigned long long)triggerType;

@end
