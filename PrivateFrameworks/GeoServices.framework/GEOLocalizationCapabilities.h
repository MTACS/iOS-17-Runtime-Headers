
@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {
    struct { 
        unsigned int has_supportsLocalizedTrafficControlIcons : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPhoneticTypes;
    bool  _supportsLocalizedTrafficControlIcons;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSupportsLocalizedTrafficControlIcons;
@property (nonatomic, readonly) int*supportedPhoneticTypes;
@property (nonatomic, readonly) unsigned long long supportedPhoneticTypesCount;
@property (nonatomic) bool supportsLocalizedTrafficControlIcons;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSupportedPhoneticTypes:(id)arg1;
- (void)addSupportedPhoneticType:(int)arg1;
- (void)clearSupportedPhoneticTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportsLocalizedTrafficControlIcons;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportsLocalizedTrafficControlIcons:(bool)arg1;
- (void)setSupportedPhoneticTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportsLocalizedTrafficControlIcons:(bool)arg1;
- (int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedPhoneticTypes;
- (id)supportedPhoneticTypesAsString:(int)arg1;
- (unsigned long long)supportedPhoneticTypesCount;
- (bool)supportsLocalizedTrafficControlIcons;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)supportedPhoneticTypesForPhoneticLocaleID:(id)arg1;

@end
