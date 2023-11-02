
@interface CPAccNavParamKey : NSObject <NSCopying> {
    long long  _accNavType;
    NSSet * _characteristics;
    NSDimension * _dimension;
    unsigned char  _enumType;
    bool  _hasVariants;
    bool  _isBoolValue;
    bool  _isIntegerValue;
    bool  _isTimeIntervalValue;
    unsigned short  _key;
    CPAccNavParam * _param;
}

@property (nonatomic) long long accNavType;
@property (nonatomic, retain) NSSet *characteristics;
@property (nonatomic, retain) NSDimension *dimension;
@property (nonatomic) unsigned char enumType;
@property (nonatomic, readonly) bool hasCharacteristics;
@property (nonatomic) bool hasVariants;
@property (nonatomic) bool isBoolValue;
@property (nonatomic) bool isIntegerValue;
@property (nonatomic) bool isTimeIntervalValue;
@property (nonatomic) unsigned short key;
@property (nonatomic) CPAccNavParam *param;
@property (nonatomic, readonly) id unsetValue;

+ (id)paramKey:(unsigned short)arg1;

- (void).cxx_destruct;
- (long long)accNavType;
- (id)characteristics;
- (id)copySettingAccNavType:(long long)arg1;
- (id)copySettingDimension:(id)arg1;
- (id)copySettingEnumType:(unsigned char)arg1;
- (id)copySettingHasVariants:(bool)arg1;
- (id)copySettingIsBoolValue:(bool)arg1;
- (id)copySettingIsIntegerValue:(bool)arg1;
- (id)copySettingIsTimeIntervalValue:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dimension;
- (unsigned char)enumType;
- (bool)hasCharacteristics;
- (bool)hasVariants;
- (id)init;
- (bool)isBoolValue;
- (bool)isIntegerValue;
- (bool)isTimeIntervalValue;
- (unsigned short)key;
- (id)param;
- (void)setAccNavType:(long long)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setDimension:(id)arg1;
- (void)setEnumType:(unsigned char)arg1;
- (void)setHasVariants:(bool)arg1;
- (void)setIsBoolValue:(bool)arg1;
- (void)setIsIntegerValue:(bool)arg1;
- (void)setIsTimeIntervalValue:(bool)arg1;
- (void)setKey:(unsigned short)arg1;
- (void)setParam:(id)arg1;
- (id)unsetValue;

@end
