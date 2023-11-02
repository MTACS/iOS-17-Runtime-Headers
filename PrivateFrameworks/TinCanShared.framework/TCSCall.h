
@interface TCSCall : NSObject <NSSecureCoding> {
    TCSCallCenter * _callCenter;
    NSString * _contactIdentifier;
    NSDate * _dateAnsweredOrDialed;
    NSDate * _dateConnected;
    int  _disconnectedReason;
    NSString * _handleValue;
    bool  _isConnected;
    bool  _isNilCall;
    bool  _isOutgoing;
    bool  _isRemoteUplinkMuted;
    int  _status;
    NSString * _uniqueProxyIdentifier;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSDate *dateAnsweredOrDialed;
@property (nonatomic, readonly, copy) NSDate *dateConnected;
@property (nonatomic, readonly) int disconnectedReason;
@property (nonatomic, readonly, copy) NSString *handleValue;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isIncoming;
@property (nonatomic, readonly) bool isOutgoing;
@property (nonatomic, readonly) bool isRemoteUplinkMuted;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly, copy) NSString *uniqueProxyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)contactIdentifier;
- (id)dateAnsweredOrDialed;
- (id)dateConnected;
- (id)description;
- (int)disconnectedReason;
- (void)encodeWithCoder:(id)arg1;
- (id)handleValue;
- (unsigned long long)hash;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isActive;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCall:(id)arg1;
- (bool)isIncoming;
- (bool)isOutgoing;
- (bool)isRemoteUplinkMuted;
- (void)setCallCenter:(id)arg1;
- (void)setUplinkMuted:(bool)arg1 completion:(id /* block */)arg2;
- (int)status;
- (id)uniqueProxyIdentifier;

@end
