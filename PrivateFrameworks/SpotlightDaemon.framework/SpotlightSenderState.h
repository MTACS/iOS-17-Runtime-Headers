
@interface SpotlightSenderState : NSObject {
    CSReceiverServerPreferences * _serverPreferences;
}

@property (nonatomic, readonly) CSReceiverServerPreferences *serverPreferences;

- (void).cxx_destruct;
- (void)_updateFromPreferences;
- (bool)clientDisabled:(long long)arg1;
- (id)init;
- (id)serverPreferences;

@end
