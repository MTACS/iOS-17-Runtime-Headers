
@interface BioStreamsEventHelper : NSObject {
    long long  _deviceType;
    bool  _inBuddy;
}

@property (nonatomic) long long deviceType;
@property (nonatomic) bool inBuddy;

- (id)containerIdentifier;
- (long long)deviceType;
- (bool)inBuddy;
- (id)initWithBKDeviceType:(long long)arg1 inBuddy:(bool)arg2;
- (void)sendSuccessfulEnrollEvent;
- (void)setDeviceType:(long long)arg1;
- (void)setInBuddy:(bool)arg1;
- (id)subtype;

@end
