
@interface ECLocalActionReplayer : NSObject <EFLoggable> {
    ECLocalMessageAction * _action;
    <ECLocalActionReplayerDelegate> * _delegate;
    NSError * _error;
}

@property (nonatomic, retain) ECLocalMessageAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ECLocalActionReplayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)action;
- (id)delegate;
- (id)error;
- (id)failActionWithError:(id)arg1;
- (id)init;
- (id)initWithAction:(id)arg1;
- (id)replayAction;
- (void)setAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;

@end
