
@interface SBInvalidateSnapshotCacheSwitcherEventResponse : SBSwitcherModifierEventResponse {
    NSArray * _displayItems;
}

@property (nonatomic, readonly, copy) NSArray *displayItems;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)displayItems;
- (id)initWithDisplayItems:(id)arg1;
- (long long)type;

@end
