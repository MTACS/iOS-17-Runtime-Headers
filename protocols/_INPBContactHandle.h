
@protocol _INPBContactHandle <NSObject>

@required

- (int)StringAsEmergencyType:(NSString *)arg1;
- (int)StringAsFaceTimeType:(NSString *)arg1;
- (int)StringAsType:(NSString *)arg1;
- (int)emergencyType;
- (NSString *)emergencyTypeAsString:(int)arg1;
- (int)faceTimeType;
- (NSString *)faceTimeTypeAsString:(int)arg1;
- (bool)hasEmergencyType;
- (bool)hasFaceTimeType;
- (bool)hasLabel;
- (bool)hasSuggested;
- (bool)hasType;
- (bool)hasValue;
- (NSString *)label;
- (void)setEmergencyType:(int)arg1;
- (void)setFaceTimeType:(int)arg1;
- (void)setHasEmergencyType:(bool)arg1;
- (void)setHasFaceTimeType:(bool)arg1;
- (void)setHasSuggested:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setSuggested:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(NSString *)arg1;
- (bool)suggested;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (NSString *)value;

@end
