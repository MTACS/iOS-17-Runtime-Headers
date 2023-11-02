
@interface HKQueryAnchor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientToken;
    long long  _rowid;
}

@property (getter=_clientToken, setter=_setClientToken:, nonatomic, copy) NSString *clientToken;
@property (getter=_rowid, nonatomic, readonly) long long rowid;

+ (id)_anchorWithRowid:(long long)arg1;
+ (id)anchorFromValue:(unsigned long long)arg1;
+ (id)latestAnchor;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_clientToken;
- (long long)_rowid;
- (void)_setClientToken:(id)arg1;
- (void)_setRowid:(long long)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
