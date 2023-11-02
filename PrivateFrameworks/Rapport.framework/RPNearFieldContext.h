
@interface RPNearFieldContext : NSObject <NSSecureCoding> {
    NSString * _applicationLabel;
    NSUUID * _bonjourListenerUUID;
    NSData * _pkData;
}

@property (nonatomic, readonly, copy) NSString *applicationLabel;
@property (nonatomic, readonly) NSUUID *bonjourListenerUUID;
@property (nonatomic, readonly, copy) NSData *pkData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationLabel;
- (id)bonjourListenerUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWitApplicationLabel:(id)arg1;
- (id)initWithApplicationLabel:(id)arg1 pkData:(id)arg2 bonjourListenerUUID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pkData;

@end
