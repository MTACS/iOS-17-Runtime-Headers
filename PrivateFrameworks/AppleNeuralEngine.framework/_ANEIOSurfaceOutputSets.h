
@interface _ANEIOSurfaceOutputSets : NSObject <NSSecureCoding> {
    NSArray * _outputBuffer;
    struct __IOSurface { } * _statsSurRef;
}

@property (nonatomic, readonly) NSArray *outputBuffer;
@property (nonatomic, readonly) struct __IOSurface { }*statsSurRef;

+ (id)new;
+ (id)objectWithstatsSurRef:(struct __IOSurface { }*)arg1 outputBuffer:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithstatsSurRef:(struct __IOSurface { }*)arg1 outputBuffer:(id)arg2;
- (id)outputBuffer;
- (struct __IOSurface { }*)statsSurRef;

@end
