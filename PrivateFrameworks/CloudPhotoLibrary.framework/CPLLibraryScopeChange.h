
@interface CPLLibraryScopeChange : CPLScopeChange {
    NSString * _problematicFormerSharedScopeIdentifier;
    NSData * _rewindAnchorsPerSharingScopesData;
}

@property (nonatomic, copy) NSString *problematicFormerSharedScopeIdentifier;
@property (nonatomic, copy) NSData *rewindAnchorsPerSharingScopesData;

- (void).cxx_destruct;
- (bool)hasProblematicFormerSharedScope;
- (id)problematicFormerSharedScopeIdentifier;
- (id)rewindAnchorsPerSharingScopes;
- (id)rewindAnchorsPerSharingScopesData;
- (void)setProblematicFormerSharedScopeIdentifier:(id)arg1;
- (void)setRewindAnchorsPerSharingScopes:(id)arg1;
- (void)setRewindAnchorsPerSharingScopesData:(id)arg1;

@end
