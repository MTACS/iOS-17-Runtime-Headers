
@interface MOSettingMetadata : NSObject {
    id  _defaultValue;
    bool  _isPublic;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) bool isPublic;

- (void).cxx_destruct;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultValue:(id)arg1 isPublic:(bool)arg2;
- (bool)isPublic;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
