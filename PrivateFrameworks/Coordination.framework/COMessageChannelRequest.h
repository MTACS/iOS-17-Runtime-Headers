
@interface COMessageChannelRequest : NSObject <NSSecureCoding> {
    NSObject<OS_nw_activity> * _networkActivity;
}

@property (nonatomic, retain) NSObject<OS_nw_activity> *networkActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)networkActivity;
- (void)setNetworkActivity:(id)arg1;

@end
