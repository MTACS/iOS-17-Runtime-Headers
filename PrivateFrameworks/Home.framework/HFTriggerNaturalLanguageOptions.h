
@interface HFTriggerNaturalLanguageOptions : HFNaturalLanguageOptions {
    HFActionNaturalLanguageOptions * _actionNaturalLanguageOptions;
    NSArray * _actions;
    long long  _formattingStyle;
    HMHome * _home;
    HMUser * _locationEventUser;
    unsigned long long  _nameType;
    NSSet * _objectsInContext;
    bool  _shouldUseFirstPersonPronounIfPossible;
    bool  _shouldUseFullDayNames;
}

@property (nonatomic, retain) HFActionNaturalLanguageOptions *actionNaturalLanguageOptions;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) long long formattingStyle;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) HMUser *locationEventUser;
@property (nonatomic) unsigned long long nameType;
@property (nonatomic, retain) NSSet *objectsInContext;
@property (nonatomic) bool shouldUseFirstPersonPronounIfPossible;
@property (nonatomic) bool shouldUseFullDayNames;

+ (id)optionsWithHome:(id)arg1 nameType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_copyFromOptions:(id)arg1;
- (id)actionNaturalLanguageOptions;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)formattingStyle;
- (id)home;
- (id)initWithHome:(id)arg1 nameType:(unsigned long long)arg2;
- (id)initWithHome:(id)arg1 nameType:(unsigned long long)arg2 actions:(id)arg3;
- (id)locationEventUser;
- (unsigned long long)nameType;
- (id)objectsInContext;
- (void)setActionNaturalLanguageOptions:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setFormattingStyle:(long long)arg1;
- (void)setHome:(id)arg1;
- (void)setLocationEventUser:(id)arg1;
- (void)setNameType:(unsigned long long)arg1;
- (void)setObjectsInContext:(id)arg1;
- (void)setShouldUseFirstPersonPronounIfPossible:(bool)arg1;
- (void)setShouldUseFullDayNames:(bool)arg1;
- (bool)shouldUseFirstPersonPronounIfPossible;
- (bool)shouldUseFullDayNames;

@end
