
@protocol _INPBStartWorkoutIntent <NSObject>

@required

+ (Class)associatedItemsType;

- (int)StringAsSequenceLabel:(NSString *)arg1;
- (int)StringAsWorkoutGoalUnitType:(NSString *)arg1;
- (int)StringAsWorkoutLocationType:(NSString *)arg1;
- (void)addAssociatedItems:(_INPBWorkoutAssociatedItem *)arg1;
- (NSArray *)associatedItems;
- (_INPBWorkoutAssociatedItem *)associatedItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedItemsCount;
- (void)clearAssociatedItems;
- (_INPBWorkoutCustomization *)customization;
- (_INPBDouble *)goalValue;
- (bool)hasCustomization;
- (bool)hasGoalValue;
- (bool)hasIntentMetadata;
- (bool)hasIsBuiltInWorkoutType;
- (bool)hasIsOpenEnded;
- (bool)hasIsVoiceOnly;
- (bool)hasSequenceLabel;
- (bool)hasWorkoutGoalUnitType;
- (bool)hasWorkoutLocationType;
- (bool)hasWorkoutName;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isBuiltInWorkoutType;
- (bool)isOpenEnded;
- (bool)isVoiceOnly;
- (int)sequenceLabel;
- (NSString *)sequenceLabelAsString:(int)arg1;
- (void)setAssociatedItems:(NSArray *)arg1;
- (void)setCustomization:(_INPBWorkoutCustomization *)arg1;
- (void)setGoalValue:(_INPBDouble *)arg1;
- (void)setHasIsBuiltInWorkoutType:(bool)arg1;
- (void)setHasIsOpenEnded:(bool)arg1;
- (void)setHasIsVoiceOnly:(bool)arg1;
- (void)setHasSequenceLabel:(bool)arg1;
- (void)setHasWorkoutGoalUnitType:(bool)arg1;
- (void)setHasWorkoutLocationType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsBuiltInWorkoutType:(bool)arg1;
- (void)setIsOpenEnded:(bool)arg1;
- (void)setIsVoiceOnly:(bool)arg1;
- (void)setSequenceLabel:(int)arg1;
- (void)setWorkoutGoalUnitType:(int)arg1;
- (void)setWorkoutLocationType:(int)arg1;
- (void)setWorkoutName:(_INPBDataString *)arg1;
- (int)workoutGoalUnitType;
- (NSString *)workoutGoalUnitTypeAsString:(int)arg1;
- (int)workoutLocationType;
- (NSString *)workoutLocationTypeAsString:(int)arg1;
- (_INPBDataString *)workoutName;

@end
