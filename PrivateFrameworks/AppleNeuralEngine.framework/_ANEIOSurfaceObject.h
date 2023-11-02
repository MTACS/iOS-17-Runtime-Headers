
@interface _ANEIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } * _ioSurface;
    NSNumber * _startOffset;
}

@property (nonatomic, readonly) struct __IOSurface { }*ioSurface;
@property (nonatomic, readonly) NSNumber *startOffset;

+ (struct __IOSurface { }*)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3;
+ (struct __IOSurface { }*)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3 bytesPerElement:(int)arg4;
+ (id)new;
+ (id)objectWithIOSurface:(struct __IOSurface { }*)arg1;
+ (id)objectWithIOSurface:(struct __IOSurface { }*)arg1 startOffset:(id)arg2;
+ (id)objectWithIOSurfaceNoRetain:(struct __IOSurface { }*)arg1 startOffset:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 startOffset:(id)arg2 shouldRetain:(bool)arg3;
- (struct __IOSurface { }*)ioSurface;
- (id)startOffset;

@end
