
@interface GCGenericDevicePhysicalInputModelBuilder : NSObject {
    NSSet * _elements;
}

@property (nonatomic, copy) NSSet *elements;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)elements;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setElements:(id)arg1;

@end
