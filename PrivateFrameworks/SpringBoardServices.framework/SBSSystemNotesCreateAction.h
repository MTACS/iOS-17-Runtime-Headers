
@interface SBSSystemNotesCreateAction : BSAction

@property (nonatomic, readonly) long long reason;

- (id)initWithReason:(long long)arg1 responder:(id)arg2;
- (long long)reason;

@end
