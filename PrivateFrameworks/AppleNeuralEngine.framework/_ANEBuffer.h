
@interface _ANEBuffer : NSObject <NSSecureCoding> {
    _ANEIOSurfaceObject * _ioSurfaceObject;
    long long  _source;
    NSNumber * _symbolIndex;
}

@property (nonatomic, readonly) _ANEIOSurfaceObject *ioSurfaceObject;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSNumber *symbolIndex;

+ (id)bufferWithIOSurfaceObject:(id)arg1 symbolIndex:(id)arg2 source:(long long)arg3;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurfaceObject:(id)arg1 symbolIndex:(id)arg2 source:(long long)arg3;
- (id)ioSurfaceObject;
- (long long)source;
- (id)symbolIndex;

@end
