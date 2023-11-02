
@interface PRSPosterPathsAssertion : NSObject <NSSecureCoding> {
    BSAction * _invalidationAction;
    NSArray * _paths;
}

@property (nonatomic, readonly) NSArray *paths;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPaths:(id)arg1 invalidationAction:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 queue:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (void)invalidateWithResponder:(id)arg1;
- (id)paths;

@end
