
@protocol HFReorderableHomeKitObject <HFHomeKitObject>

@required

- (NSDate *)hf_dateAdded;
- (NSString *)hf_displayName;
- (NAFuture *)hf_updateDateAdded:(NSDate *)arg1;

@end
