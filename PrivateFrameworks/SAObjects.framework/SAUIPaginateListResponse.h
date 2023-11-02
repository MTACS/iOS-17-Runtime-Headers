
@interface SAUIPaginateListResponse : SABaseClientBoundCommand

@property (nonatomic) long long firstItemIndex;
@property (nonatomic) long long focusedItemIndex;

- (id)encodedClassName;
- (long long)firstItemIndex;
- (long long)focusedItemIndex;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFirstItemIndex:(long long)arg1;
- (void)setFocusedItemIndex:(long long)arg1;

@end
