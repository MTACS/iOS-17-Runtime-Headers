
@interface GCGenericDeviceDriverModelBuilder : NSObject {
    NSSet * _elements;
    GCGenericDeviceInputEventDriverModel * _input;
    GCGenericDeviceRumbleModel * _rumble;
}

@property (nonatomic, copy) NSSet *elements;
@property (nonatomic, copy) GCGenericDeviceInputEventDriverModel *input;
@property (nonatomic, copy) GCGenericDeviceRumbleModel *rumble;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)elements;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (id)rumble;
- (void)setElements:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setRumble:(id)arg1;

@end
