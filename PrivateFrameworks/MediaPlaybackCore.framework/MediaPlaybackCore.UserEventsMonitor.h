
@interface MediaPlaybackCore.UserEventsMonitor : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void delegate;
    void monitors;
    void reporter;
    void timeout;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (id)stateDictionary;

@end
