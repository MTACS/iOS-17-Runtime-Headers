
@interface SFAirDropTransferChange : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    SFProxyText * _displayName;
    double  _progress;
    NSUUID * _proxyIdentifier;
    long long  _state;
    SFProxyText * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SFProxyText *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) NSUUID *proxyIdentifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) SFProxyText *status;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyIdentifier:(id)arg1 progress:(double)arg2 displayName:(id)arg3 status:(id)arg4 state:(long long)arg5;
- (double)progress;
- (id)proxyIdentifier;
- (long long)state;
- (id)status;

@end
