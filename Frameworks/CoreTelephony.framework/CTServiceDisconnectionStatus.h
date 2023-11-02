
@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _activationFailure;
    NSString * _apnName;
    NSNumber * _connectionMask;
    int  _contextType;
    int  _error;
    NSNumber * _pdp;
    NSNumber * _rawCauseCode;
}

@property (nonatomic) bool activationFailure;
@property (nonatomic, retain) NSString *apnName;
@property (nonatomic, retain) NSNumber *connectionMask;
@property (nonatomic) int contextType;
@property (nonatomic) int error;
@property (nonatomic, retain) NSNumber *pdp;
@property (nonatomic, retain) NSNumber *rawCauseCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)activationFailure;
- (id)apnName;
- (id)connectionMask;
- (int)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)error;
- (id)initWithCoder:(id)arg1;
- (id)pdp;
- (id)rawCauseCode;
- (void)setActivationFailure:(bool)arg1;
- (void)setApnName:(id)arg1;
- (void)setConnectionMask:(id)arg1;
- (void)setContextType:(int)arg1;
- (void)setError:(int)arg1;
- (void)setPdp:(id)arg1;
- (void)setRawCauseCode:(id)arg1;

@end
