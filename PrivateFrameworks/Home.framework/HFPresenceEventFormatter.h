
@interface HFPresenceEventFormatter : NSFormatter {
    HMHome * _home;
    unsigned long long  _nameType;
    HFTriggerNaturalLanguageOptions * _options;
    unsigned long long  _style;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic) unsigned long long nameType;
@property (nonatomic) HFTriggerNaturalLanguageOptions *options;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (unsigned long long)nameType;
- (id)options;
- (void)setHome:(id)arg1;
- (void)setNameType:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)stringForPresenceEvent:(id)arg1;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)stringForPresenceEventBuilder:(id)arg1 actionsDescription:(id)arg2;
- (unsigned long long)style;

@end
