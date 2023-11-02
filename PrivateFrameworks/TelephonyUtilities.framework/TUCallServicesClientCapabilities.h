
@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {
    <TUCallServicesClientCapabilitiesActions> * _delegate;
    bool  _wantsCallDisconnectionOnInvalidation;
    bool  _wantsCallNotificationsDisabledWhileSuspended;
    bool  _wantsCallStopStreamingOnInvalidation;
    bool  _wantsFrequencyChangeNotifications;
    bool  _wantsToScreenCalls;
}

@property (nonatomic) <TUCallServicesClientCapabilitiesActions> *delegate;
@property (nonatomic) bool wantsCallDisconnectionOnInvalidation;
@property (nonatomic) bool wantsCallNotificationsDisabledWhileSuspended;
@property (nonatomic) bool wantsCallStopStreamingOnInvalidation;
@property (nonatomic) bool wantsFrequencyChangeNotifications;
@property (nonatomic) bool wantsToScreenCalls;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (void)setDelegate:(id)arg1;
- (void)setWantsCallDisconnectionOnInvalidation:(bool)arg1;
- (void)setWantsCallNotificationsDisabledWhileSuspended:(bool)arg1;
- (void)setWantsCallStopStreamingOnInvalidation:(bool)arg1;
- (void)setWantsFrequencyChangeNotifications:(bool)arg1;
- (void)setWantsToScreenCalls:(bool)arg1;
- (bool)wantsCallDisconnectionOnInvalidation;
- (bool)wantsCallNotificationsDisabledWhileSuspended;
- (bool)wantsCallStopStreamingOnInvalidation;
- (bool)wantsFrequencyChangeNotifications;
- (bool)wantsToScreenCalls;

@end
