
@interface NUNumberSetting : NUSetting {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _ui_maximumValue;
    NSNumber * _ui_minimumValue;
}

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *ui_maximumValue;
@property (readonly) NSNumber *ui_minimumValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (id)identityValue;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 attributes:(id)arg3;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 uiMinimum:(id)arg3 uiMaximum:(id)arg4 attributes:(id)arg5;
- (bool)isValid:(out id*)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (id)ui_maximumValue;
- (id)ui_minimumValue;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateNumber:(id)arg1 error:(out id*)arg2;

@end
