
@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity {
    long long  _previousLayoutRole;
}

@property (nonatomic, readonly) long long previousLayoutRole;

+ (id)entityWithPreviousLayoutRole:(long long)arg1;

- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)initWithPreviousLayoutRole:(long long)arg1;
- (bool)isPreviousWorkspaceEntity;
- (long long)previousLayoutRole;
- (id)succinctDescriptionBuilder;

@end
