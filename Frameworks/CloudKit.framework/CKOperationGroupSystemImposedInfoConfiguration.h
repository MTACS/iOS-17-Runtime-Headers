
@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsCellularAccess;
    bool  _isUplink;
}

@property bool allowsCellularAccess;
@property bool isUplink;

+ (bool)supportsSecureCoding;

- (bool)allowsCellularAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUplink;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setIsUplink:(bool)arg1;

@end
