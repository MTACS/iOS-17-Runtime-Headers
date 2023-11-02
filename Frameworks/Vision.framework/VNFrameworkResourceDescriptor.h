
@interface VNFrameworkResourceDescriptor : VNResourceDescriptor {
    NSBundle * _frameworkBundle;
}

@property (readonly) NSBundle *frameworkBundle;

+ (id)descriptorForFrameworkContainingClass:(Class)arg1 error:(id*)arg2;
+ (id)descriptorForFrameworkContainingClassNamed:(id)arg1 error:(id*)arg2;
+ (id)descriptorForFrameworkIdentifier:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)frameworkBundle;
- (unsigned long long)hash;
- (id)initWithBundle:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
