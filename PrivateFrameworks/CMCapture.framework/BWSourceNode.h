
@interface BWSourceNode : BWNode

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;

- (struct OpaqueCMClock { }*)clock;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeType;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;

@end
