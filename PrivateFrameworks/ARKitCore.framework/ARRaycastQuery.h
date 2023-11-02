
@interface ARRaycastQuery : NSObject {
    void _direction;
    void _origin;
    long long  _target;
    long long  _targetAlignment;
}

@property (nonatomic, readonly) void direction;
@property (nonatomic, readonly) void origin;
@property (nonatomic, readonly) long long target;
@property (nonatomic, readonly) long long targetAlignment;

- (id)description;
- (void)direction;
- (id)initWithOrigin:(void *)arg1 direction:(void *)arg2 allowingTarget:(void *)arg3 alignment:(void *)arg4; // needs 4 arg types, found 2: long long, long long
- (bool)isEqual:(id)arg1;
- (void)origin;
- (long long)target;
- (long long)targetAlignment;

@end
