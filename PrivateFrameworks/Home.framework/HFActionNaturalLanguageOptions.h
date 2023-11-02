
@interface HFActionNaturalLanguageOptions : HFSubstringNaturalLanguageOptions {
    unsigned long long  _accessoryCountType;
    HMHome * _home;
    bool  _ignoreOptionalCharacteristics;
    NSSet * _objectsInContext;
    bool  _useMediaContainersNotInContext;
}

@property (nonatomic) unsigned long long accessoryCountType;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool ignoreOptionalCharacteristics;
@property (nonatomic, retain) NSSet *objectsInContext;
@property (nonatomic) bool useMediaContainersNotInContext;

- (void).cxx_destruct;
- (unsigned long long)accessoryCountType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (bool)ignoreOptionalCharacteristics;
- (id)initWithHome:(id)arg1 formattingContext:(long long)arg2;
- (id)objectsInContext;
- (void)setAccessoryCountType:(unsigned long long)arg1;
- (void)setHome:(id)arg1;
- (void)setIgnoreOptionalCharacteristics:(bool)arg1;
- (void)setObjectsInContext:(id)arg1;
- (void)setUseMediaContainersNotInContext:(bool)arg1;
- (bool)useMediaContainersNotInContext;

@end
