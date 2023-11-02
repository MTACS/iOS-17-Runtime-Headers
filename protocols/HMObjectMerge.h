
@protocol HMObjectMerge <NSObject>

@required

- (bool)mergeFromNewObject:(id <HMObjectMerge>)arg1;
- (NSUUID *)uniqueIdentifier;

@optional

- (void)mergeFromNewObjectNoMergeCount:(id <HMObjectMerge>)arg1;

@end
