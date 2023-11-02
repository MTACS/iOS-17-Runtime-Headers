
@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (nonatomic) bool active;
@property (nonatomic, copy) NSNumber *automaticConfirmationThreshold;
@property (nonatomic, copy) NSString *buttonRole;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *delayExpiryCommands;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iconLabel;
@property (nonatomic, copy) NSString *iconType;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *speechDuration;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (id)confirmationOption;
+ (id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2;

- (bool)active;
- (id)automaticConfirmationThreshold;
- (id)buttonRole;
- (id)commands;
- (id)delayExpiryCommands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)iconLabel;
- (id)iconType;
- (id)label;
- (void)setActive:(bool)arg1;
- (void)setAutomaticConfirmationThreshold:(id)arg1;
- (void)setButtonRole:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setDelayExpiryCommands:(id)arg1;
- (void)setIconLabel:(id)arg1;
- (void)setIconType:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSpeechDuration:(id)arg1;
- (void)setType:(id)arg1;
- (id)speechDuration;
- (id)type;

@end
