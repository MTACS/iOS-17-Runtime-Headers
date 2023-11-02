
@interface MIOModelPackage : NSObject {
    NSURL * _specificationURL;
}

@property (nonatomic, copy) NSURL *specificationURL;

+ (bool)_upgradeModelSpecificationAtURL:(id)arg1 packageURL:(id)arg2 error:(id*)arg3;
+ (id)upgradeModelSpecificationAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithModelPackageAtURL:(id)arg1 error:(id*)arg2;
- (void)setSpecificationURL:(id)arg1;
- (id)specificationURL;

@end
