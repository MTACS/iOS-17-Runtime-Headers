
@interface CMSContentFailureRecoveryEvent : CMSBaseContentFailureEvent {
    unsigned long long  _recoveryDuration;
}

@property (nonatomic) unsigned long long recoveryDuration;

- (id)encoded;
- (id)initWithSessionID:(id)arg1 sessionIdentifier:(id)arg2 recoveryDuration:(unsigned long long)arg3;
- (unsigned long long)recoveryDuration;
- (void)setRecoveryDuration:(unsigned long long)arg1;

@end
