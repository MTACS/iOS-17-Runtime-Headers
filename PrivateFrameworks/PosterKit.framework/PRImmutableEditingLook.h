
@interface PRImmutableEditingLook : PREditingLook {
    NSString * _displayName;
    NSString * _identifier;
    PREditingLookProperties * _initialProperties;
}

- (void).cxx_destruct;
- (id)displayName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 initialTimeFontConfiguration:(id)arg3 initialTitleColor:(id)arg4;
- (id)initialProperties;

@end
