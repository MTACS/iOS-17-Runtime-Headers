
@protocol BSXPCServiceConnectionAuditTokenUpdater <NSObject>

@required

- (void)updateAuditTokenFromReplyMessage:(BSXPCServiceConnectionMessage *)arg1 fromActivationGeneration:(unsigned int)arg2;

@end
