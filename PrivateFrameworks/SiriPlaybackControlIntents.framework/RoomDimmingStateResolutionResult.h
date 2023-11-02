
@interface RoomDimmingStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithRoomDimmingStateToConfirm:(long long)arg1;
+ (id)successWithResolvedRoomDimmingState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
