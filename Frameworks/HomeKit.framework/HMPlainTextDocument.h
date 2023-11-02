
@interface HMPlainTextDocument : NSObject <NSCopying, NSSecureCoding> {
    _HMDocument * _document;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) _HMDocument *document;
@property (readonly, copy) NSString *stringValue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)stringValue;

@end
