
@interface HDCodableMedicalUserDomainConcept : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryTypes;
    NSString * _countryCode;
}

@property (nonatomic, readonly) long long*categoryTypes;
@property (nonatomic, readonly) unsigned long long categoryTypesCount;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;

- (void).cxx_destruct;
- (void)addCategoryTypes:(long long)arg1;
- (long long*)categoryTypes;
- (long long)categoryTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryTypesCount;
- (void)clearCategoryTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryTypes:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setCountryCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
