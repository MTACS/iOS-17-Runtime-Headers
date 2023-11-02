
@interface VSValueType : NSObject {
    Class  _implementationClass;
    NSArray * _properties;
}

@property (nonatomic, retain) Class implementationClass;
@property (nonatomic, copy) NSArray *properties;

- (void).cxx_destruct;
- (Class)implementationClass;
- (bool)isSuperclassAlsoValueType;
- (id)properties;
- (void)setImplementationClass:(Class)arg1;
- (void)setProperties:(id)arg1;

@end
