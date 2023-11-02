
@interface VGRotationTranslation : NSObject <NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _rotation;
    void _translation;
}

@property (nonatomic) struct { } rotation;
@property (nonatomic) void translation;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { })rotation;
- (void)setRotation:(struct { })arg1;
- (void)setTranslation;
- (void)translation;

@end
