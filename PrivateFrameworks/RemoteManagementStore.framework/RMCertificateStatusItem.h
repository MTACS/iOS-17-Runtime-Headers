
@interface RMCertificateStatusItem : NSObject <NSSecureCoding> {
    bool  _isIdentity;
    NSData * _persistentRef;
}

@property (nonatomic, readonly) bool isIdentity;
@property (nonatomic, readonly) NSData *persistentRef;

+ (id)certificateStatusItemWithPersistentRef:(id)arg1 isIdentity:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithPersistentRef:(id)arg1 isIdentity:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCertificateStatus:(id)arg1;
- (bool)isIdentity;
- (id)persistentRef;

@end
