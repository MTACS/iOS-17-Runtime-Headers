
@interface _INPBIntentSupport : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSupport> {
    struct { }  _has;
    NSArray * _intentsRestrictedWhileLockeds;
    NSArray * _intentsSupporteds;
    NSArray * _supportedMediaCategories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentsRestrictedWhileLockeds;
@property (nonatomic, readonly) unsigned long long intentsRestrictedWhileLockedsCount;
@property (nonatomic, copy) NSArray *intentsSupporteds;
@property (nonatomic, readonly) unsigned long long intentsSupportedsCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedMediaCategories;
@property (nonatomic, readonly) unsigned long long supportedMediaCategoriesCount;

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIntentsRestrictedWhileLocked:(id)arg1;
- (void)addIntentsSupported:(id)arg1;
- (void)addSupportedMediaCategories:(id)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)clearIntentsSupporteds;
- (void)clearSupportedMediaCategories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (id)intentsRestrictedWhileLockeds;
- (unsigned long long)intentsRestrictedWhileLockedsCount;
- (id)intentsSupportedAtIndex:(unsigned long long)arg1;
- (id)intentsSupporteds;
- (unsigned long long)intentsSupportedsCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentsRestrictedWhileLockeds:(id)arg1;
- (void)setIntentsSupporteds:(id)arg1;
- (void)setSupportedMediaCategories:(id)arg1;
- (id)supportedMediaCategories;
- (id)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedMediaCategoriesCount;
- (void)writeTo:(id)arg1;

@end
