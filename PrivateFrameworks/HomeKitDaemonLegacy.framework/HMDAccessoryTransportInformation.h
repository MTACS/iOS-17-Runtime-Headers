
@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding> {
    HAPAccessory * _hapAccessory;
    NSNumber * _instanceID;
    long long  _linkType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _protocolVersion;
    bool  _reachable;
    NSDate * _reachableLastChangedTime;
    NSString * _serverIdentifier;
}

@property (retain) HAPAccessory *hapAccessory;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, readonly) long long linkType;
@property (copy) NSString *protocolVersion;
@property (getter=isReachable) bool reachable;
@property (readonly, copy) NSDate *reachableLastChangedTime;
@property (nonatomic, readonly, copy) NSString *serverIdentifier;
@property (readonly) NSDictionary *transportInfoDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)hapAccessory;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3;
- (id)instanceID;
- (bool)isReachable;
- (long long)linkType;
- (id)protocolVersion;
- (id)reachableLastChangedTime;
- (id)report;
- (id)serverIdentifier;
- (void)setHapAccessory:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setReachable:(bool)arg1;
- (id)transportInfoDictionary;

@end
