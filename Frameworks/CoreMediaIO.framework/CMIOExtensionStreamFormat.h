
@interface CMIOExtensionStreamFormat : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    struct opaqueCMFormatDescription { } * _formatDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minFrameDuration;
    NSArray * _validFrameDurations;
}

@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property (readonly) NSArray *validFrameDurations;

+ (id)copyFormatsFromXPCArray:(id)arg1;
+ (id)copyXPCArrayFromFormats:(id)arg1;
+ (id)streamFormatWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 maxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 minFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 validFrameDurations:(id)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 maxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 minFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 validFrameDurations:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (id)validFrameDurations;

@end
