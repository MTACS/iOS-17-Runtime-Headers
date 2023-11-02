
@interface AMSFDSOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _action;
    AMSProcessInfo * _clientInfo;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)bundleIdentifier;
- (id)clientInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setClientInfo:(id)arg1;

@end
