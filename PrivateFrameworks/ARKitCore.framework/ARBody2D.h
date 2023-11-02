
@interface ARBody2D : NSObject {
    ARSkeleton2D * _skeleton;
}

@property (nonatomic, readonly) ARSkeleton2D *skeleton;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkeleton2D:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)skeleton;

@end
