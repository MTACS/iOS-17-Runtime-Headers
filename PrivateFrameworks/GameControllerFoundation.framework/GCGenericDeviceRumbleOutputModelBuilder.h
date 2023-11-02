
@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject {
    NSString * _elementIdentifier;
    NSArray * _fields;
}

@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic, copy) NSArray *fields;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)elementIdentifier;
- (id)fields;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setElementIdentifier:(id)arg1;
- (void)setFields:(id)arg1;

@end
