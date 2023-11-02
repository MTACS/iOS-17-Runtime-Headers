
@interface IFCacheImage : IFConcreteImage <NSSecureCoding> {
    NSUUID * _uuid;
    NSData * _validationToken;
}

@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4 iconSize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;
- (id)uuid;
- (id)validationToken;

@end
