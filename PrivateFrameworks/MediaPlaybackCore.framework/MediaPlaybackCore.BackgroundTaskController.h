
@interface MediaPlaybackCore.BackgroundTaskController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void provider;
    void reporter;
    void tasks;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (id)stateDictionary;

@end
