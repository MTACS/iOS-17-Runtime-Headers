
@interface PrivacyProxyNetworkStatus : NSObject <NSCopying, NSSecureCoding> {
    NSString * _networkName;
    unsigned long long  _networkStatus;
    int  _networkType;
}

@property (retain) NSString *networkName;
@property unsigned long long networkStatus;
@property int networkType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1 type:(int)arg2 name:(id)arg3;
- (id)networkName;
- (unsigned long long)networkStatus;
- (id)networkStatusString;
- (int)networkType;
- (id)networkTypeString;
- (id)serialize;
- (void)setNetworkName:(id)arg1;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (void)setNetworkType:(int)arg1;

@end
