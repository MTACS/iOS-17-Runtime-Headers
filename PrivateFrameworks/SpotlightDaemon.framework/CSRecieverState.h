
@interface CSRecieverState : NSObject {
    NSSet * _disabledBundleIdentifiers;
    NSSet * _enabledBundleIdentifiers;
    int  _notifyToken;
    CSReceiverPreferences * _receiverPreferences;
}

@property (nonatomic, readonly) NSSet *disabledBundleIdentifiers;
@property (nonatomic, readonly) NSSet *enabledBundleIdentifiers;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) CSReceiverPreferences *receiverPreferences;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateFromPreferences;
- (bool)checkBundleIdentifier:(id)arg1;
- (id)disabledBundleIdentifiers;
- (id)enabledBundleIdentifiers;
- (id)init;
- (int)notifyToken;
- (id)receiverPreferences;

@end
