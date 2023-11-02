
@interface RSMirrorPoint : NSObject <NSCopying, NSSecureCoding> {
    void _origin;
    void _reflect;
}

@property (nonatomic, readonly) void origin;
@property (nonatomic, readonly) void reflect;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginreflect;
- (void)origin;
- (void)reflect;

@end
