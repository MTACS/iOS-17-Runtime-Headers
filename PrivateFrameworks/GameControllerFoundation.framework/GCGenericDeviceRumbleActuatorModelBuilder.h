
@interface GCGenericDeviceRumbleActuatorModelBuilder : NSObject {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)reset;
- (void)setName:(id)arg1;

@end
