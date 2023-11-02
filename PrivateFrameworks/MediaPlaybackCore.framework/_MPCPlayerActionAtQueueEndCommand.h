
@interface _MPCPlayerActionAtQueueEndCommand : _MPCPlayerCommand <MPCPlayerActionAtQueueEndCommand> {
    long long  _actionAtQueueEnd;
    NSArray * _supportedActions;
}

@property (nonatomic) long long actionAtQueueEnd;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedActions;

- (void).cxx_destruct;
- (long long)actionAtQueueEnd;
- (void)setActionAtQueueEnd:(long long)arg1;
- (id)setQueueEndAction:(long long)arg1;
- (void)setSupportedActions:(id)arg1;
- (id)supportedActions;

@end
