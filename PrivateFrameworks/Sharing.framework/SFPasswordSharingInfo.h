
@interface SFPasswordSharingInfo : NSObject <NSSecureCoding> {
    NSNumber * _channel;
    NSString * _networkName;
    NSString * _psk;
}

@property (nonatomic, retain) NSNumber *channel;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic, retain) NSString *psk;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)networkName;
- (id)psk;
- (void)setChannel:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPsk:(id)arg1;

@end
