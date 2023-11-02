
@protocol BNPresentableUniquelyIdentifying <NSObject>

@optional

- (NSUUID *)uniqueIdentifier;
- (NSUUID *)uniquePresentableIdentifier;

@end
