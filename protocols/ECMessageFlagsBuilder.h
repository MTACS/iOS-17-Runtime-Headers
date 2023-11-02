
@protocol ECMessageFlagsBuilder

@required

- (bool)deleted;
- (bool)draft;
- (unsigned long long)flagColor;
- (bool)flagged;
- (bool)forwarded;
- (unsigned long long)junkLevel;
- (bool)junkLevelSetByUser;
- (bool)read;
- (bool)redirected;
- (bool)replied;
- (void)setDeleted:(bool)arg1;
- (void)setDraft:(bool)arg1;
- (void)setFlagColor:(unsigned long long)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setJunkLevel:(unsigned long long)arg1;
- (void)setJunkLevelSetByUser:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setRedirected:(bool)arg1;
- (void)setReplied:(bool)arg1;

@end
