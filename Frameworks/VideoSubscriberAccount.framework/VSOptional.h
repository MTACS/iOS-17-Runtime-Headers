
@interface VSOptional : NSObject <NSSecureCoding> {
    id  _object;
}

@property (nonatomic, retain) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)conditionallyUnwrapObject:(id /* block */)arg1;
- (void)conditionallyUnwrapObject:(id /* block */)arg1 otherwise:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forceUnwrapObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (id)unwrapWithFallback:(id)arg1;

@end
