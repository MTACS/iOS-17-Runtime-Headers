
@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _activationFailure;
    NSNumber * _asserted;
    NSNumber * _carrierEnabled;
    CTDataConnectionAvailabilityStatus * _connectionAvailabilityStatus;
    CTDataConnectionStatus * _connectionStatus;
    CTXPCServiceSubscriptionContext * _context;
    NSNumber * _misPdpMaxHosts;
    NSNumber * _userAuthenticated;
}

@property (nonatomic, retain) NSNumber *activationFailure;
@property (nonatomic, retain) NSNumber *asserted;
@property (nonatomic, retain) NSNumber *carrierEnabled;
@property (nonatomic, retain) CTDataConnectionAvailabilityStatus *connectionAvailabilityStatus;
@property (nonatomic, retain) CTDataConnectionStatus *connectionStatus;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, retain) NSNumber *misPdpMaxHosts;
@property (nonatomic, retain) NSNumber *userAuthenticated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationFailure;
- (id)asserted;
- (id)carrierEnabled;
- (id)connectionAvailabilityStatus;
- (id)connectionStatus;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)misPdpMaxHosts;
- (void)setActivationFailure:(id)arg1;
- (void)setAsserted:(id)arg1;
- (void)setCarrierEnabled:(id)arg1;
- (void)setConnectionAvailabilityStatus:(id)arg1;
- (void)setConnectionStatus:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setMisPdpMaxHosts:(id)arg1;
- (void)setUserAuthenticated:(id)arg1;
- (id)userAuthenticated;

@end
