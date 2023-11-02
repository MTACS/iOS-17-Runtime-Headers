
@protocol PKPassEntitlementsComposerView

@required

- (bool)enabled;
- (bool)isUsingAdvancedScheduling;
- (unsigned long long)manageability;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (PKPassShareTimeConfiguration *)possibleTimeConfiguration;
- (unsigned long long)possibleVisibility;
- (void)setEnabled:(bool)arg1;
- (void)setIsUsingAdvancedScheduling:(bool)arg1;
- (void)setManageability:(unsigned long long)arg1;
- (void)setShareability:(unsigned long long)arg1;
- (void)setTimeConfiguration:(PKPassShareTimeConfiguration *)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)shareability;
- (PKPassShareTimeConfiguration *)timeConfiguration;
- (unsigned long long)visibility;

@end
