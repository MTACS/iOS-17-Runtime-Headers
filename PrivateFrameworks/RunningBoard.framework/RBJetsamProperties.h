
@interface RBJetsamProperties : NSObject {
    bool  _freezerEligible;
    bool  _freezerEligibleSet;
    id  _globalProperties;
    id  _memoryLimitCategories;
    int  _taskLimit;
    int  _unLimit;
}

@property (getter=isFreezerEligible, nonatomic, readonly) bool freezerEligible;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)jetsamPropertiesForProperties:(id)arg1 globalProperties:(id)arg2 taskLimit:(int)arg3 unLimit:(int)arg4;

- (void).cxx_destruct;
- (id)_altKeyForCategory:(id)arg1 strength:(unsigned char)arg2;
- (unsigned char)_altStrength:(unsigned char)arg1;
- (id)_defaultKeyForCategory:(id)arg1 strength:(unsigned char)arg2;
- (id)_directPropertyDescription:(id)arg1;
- (id)_initWithProperties:(id)arg1 globalProperties:(id)arg2 taskLimit:(int)arg3 unLimit:(int)arg4;
- (int)_integerLimitValue:(id)arg1;
- (id)_keyForCategory:(id)arg1 strength:(unsigned char)arg2;
- (id)_propertiesDescription;
- (void)_setLimitFor:(id)arg1 strength:(unsigned char)arg2 toValue:(id)arg3;
- (id)description;
- (id)getValueFrom:(id)arg1 forKey:(id)arg2;
- (bool)isFreezerEligible;
- (bool)isValid;
- (int)memoryLimitForCategory:(id)arg1 strength:(unsigned char*)arg2;

@end
