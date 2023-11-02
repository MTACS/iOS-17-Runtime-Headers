
@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {
    struct { 
        unsigned int has_optionUsed : 1; 
    }  _flags;
    int  _optionUsed;
    NSMutableArray * _requestOptions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOSurchargeType> *selectedSurchargeType;
@property (nonatomic, readonly) unsigned long long selectedSurchargeTypeIndex;
@property (nonatomic, readonly) NSArray *surchargeTypes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (id)selectedSurchargeType;
- (unsigned long long)selectedSurchargeTypeIndex;
- (id)surchargeTypes;
- (void)writeTo:(id)arg1;

@end
