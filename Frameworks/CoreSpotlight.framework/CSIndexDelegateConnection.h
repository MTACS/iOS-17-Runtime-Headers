
@interface CSIndexDelegateConnection : CSIndexConnection

+ (id)sharedConnectionForUser:(unsigned int)arg1;

- (void)handleError:(id)arg1;
- (void)handleReply:(id)arg1;
- (id)indexForID:(id)arg1;
- (id)indexForProtectionClass:(id)arg1;

@end
