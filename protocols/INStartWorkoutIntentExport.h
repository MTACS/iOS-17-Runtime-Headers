
@protocol INStartWorkoutIntentExport <NSObject, JSExport>

@required

- (NSArray *)associatedItems;
- (INWorkoutCustomization *)customization;
- (NSNumber *)goalValue;
- (id)init;
- (NSNumber *)isBuiltInWorkoutType;
- (NSNumber *)isOpenEnded;
- (NSNumber *)isVoiceOnly;
- (long long)sequenceLabel;
- (void)setAssociatedItems:(NSArray *)arg1;
- (void)setCustomization:(INWorkoutCustomization *)arg1;
- (void)setGoalValue:(NSNumber *)arg1;
- (void)setIsBuiltInWorkoutType:(NSNumber *)arg1;
- (void)setIsOpenEnded:(NSNumber *)arg1;
- (void)setIsVoiceOnly:(NSNumber *)arg1;
- (void)setSequenceLabel:(long long)arg1;
- (void)setWorkoutGoalUnitType:(long long)arg1;
- (void)setWorkoutLocationType:(long long)arg1;
- (void)setWorkoutName:(INSpeakableString *)arg1;
- (long long)workoutGoalUnitType;
- (long long)workoutLocationType;
- (INSpeakableString *)workoutName;

@end
