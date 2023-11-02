
@protocol _INPBShortcutOverview <NSObject>

@required

+ (Class)stepsType;

- (void)addSteps:(_INPBImageValue *)arg1;
- (void)clearSteps;
- (_INPBDataString *)descriptiveText;
- (bool)hasDescriptiveText;
- (bool)hasIcon;
- (bool)hasName;
- (bool)hasVoiceCommand;
- (_INPBImageValue *)icon;
- (_INPBDataString *)name;
- (void)setDescriptiveText:(_INPBDataString *)arg1;
- (void)setIcon:(_INPBImageValue *)arg1;
- (void)setName:(_INPBDataString *)arg1;
- (void)setSteps:(NSArray *)arg1;
- (void)setVoiceCommand:(_INPBDataString *)arg1;
- (NSArray *)steps;
- (_INPBImageValue *)stepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (_INPBDataString *)voiceCommand;

@end
