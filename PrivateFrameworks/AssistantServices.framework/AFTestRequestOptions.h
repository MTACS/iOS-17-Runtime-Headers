
@interface AFTestRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _inputOrigin;
    NSNumber * _isEyesFree;
    long long  _requestPath;
}

@property (nonatomic, readonly, copy) NSString *inputOrigin;
@property (nonatomic, readonly, copy) NSNumber *isEyesFree;
@property (nonatomic, readonly) long long requestPath;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestPath:(long long)arg1 inputOrigin:(id)arg2 isEyesFree:(id)arg3;
- (id)inputOrigin;
- (bool)isEqual:(id)arg1;
- (id)isEyesFree;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)requestPath;

@end
