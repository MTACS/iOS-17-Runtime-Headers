
@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject {
    NSNumber * _analog;
    NSString * _identifier;
    NSString * _localizedNameKey;
    NSArray * _names;
    NSString * _symbolName;
}

@property (getter=isAnalog, nonatomic, copy) NSNumber *analog;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedNameKey;
@property (nonatomic, copy) NSArray *names;
@property (nonatomic, copy) NSString *symbolName;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)isAnalog;
- (bool)isEqual:(id)arg1;
- (id)localizedNameKey;
- (id)names;
- (void)reset;
- (void)setAnalog:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedNameKey:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
