
@interface MTSleepModeManager : NSObject <MTSleepModeManager> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEnabled;
@property (readonly) Class superclass;

- (void)checkIn;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 isSynchronous:(bool)arg2;
- (bool)isEnabled;
- (void)reconnect;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 valueDidChangeBlock:(id /* block */)arg2;

@end
