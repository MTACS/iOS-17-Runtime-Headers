
@interface CRXFLiteRXValues : NSObject <NSSecureCoding> {
    unsigned long long  _axis;
    float  _cylinder;
    float  _sphere;
}

@property (nonatomic, readonly) unsigned long long axis;
@property (nonatomic, readonly) float cylinder;
@property (nonatomic, readonly) float sphere;

+ (bool)supportsSecureCoding;

- (unsigned long long)axis;
- (float)cylinder;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSphere:(float)arg1 cylinder:(float)arg2 axis:(unsigned long long)arg3;
- (float)sphere;

@end
