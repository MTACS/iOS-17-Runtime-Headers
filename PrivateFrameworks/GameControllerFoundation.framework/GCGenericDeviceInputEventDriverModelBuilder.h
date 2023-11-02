
@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject {
    NSSet * _gamepadEventFields;
}

@property (nonatomic, copy) NSSet *gamepadEventFields;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)gamepadEventFields;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setGamepadEventFields:(id)arg1;

@end
