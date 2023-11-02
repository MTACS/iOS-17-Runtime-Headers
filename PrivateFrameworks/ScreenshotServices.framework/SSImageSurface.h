
@interface SSImageSurface : NSObject <BSXPCSecureCoding> {
    struct __IOSurface { } * _backingSurface;
    long long  _orientation;
    double  _scale;
}

@property (nonatomic) struct __IOSurface { }*backingSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) double scale;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (struct __IOSurface { }*)backingSurface;
- (void)dealloc;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (long long)orientation;
- (double)scale;
- (void)setBackingSurface:(struct __IOSurface { }*)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setScale:(double)arg1;

@end
