
@interface MediaPlaybackCore.PlayerFSM : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void controller;
    void delegate;
    void states;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (id)stateDictionary;

@end
