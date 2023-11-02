
@interface SBSSystemNotesConnectAction : BSAction

@property (nonatomic, readonly) unsigned long long connectionSource;

- (unsigned long long)connectionSource;
- (id)initWithSource:(unsigned long long)arg1 responder:(id)arg2;

@end
