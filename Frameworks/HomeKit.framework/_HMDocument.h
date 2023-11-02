
@interface _HMDocument : NSObject <NSCopying> {
    NSAttributedString * _attributedString;
    NSString * _stringValue;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)stringValue;

@end
