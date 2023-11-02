
@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {
    struct opaqueCMFormatDescription { } * _originalFormatDescription;
    struct opaqueCMFormatDescription { } * _replacementFormatDescription;
}

@property (readonly) struct opaqueCMFormatDescription { }*originalFormatDescription;
@property (readonly) struct opaqueCMFormatDescription { }*replacementFormatDescription;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 andReplacementFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (struct opaqueCMFormatDescription { }*)originalFormatDescription;
- (struct opaqueCMFormatDescription { }*)replacementFormatDescription;

@end
