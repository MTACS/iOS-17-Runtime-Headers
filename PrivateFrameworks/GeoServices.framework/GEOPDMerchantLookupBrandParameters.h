
@interface GEOPDMerchantLookupBrandParameters : PBCodable <NSCopying> {
    GEOPDAdamAppIdentifier * _appIdentifier;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_identityMerchantInformation : 1; 
        unsigned int read_merchantCanl : 1; 
        unsigned int read_merchantCode : 1; 
        unsigned int read_merchantId : 1; 
        unsigned int read_rawMerchantCode : 1; 
        unsigned int read_warsawIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDIdentityMerchantInformation * _identityMerchantInformation;
    NSString * _merchantCanl;
    NSString * _merchantCode;
    NSString * _merchantId;
    NSString * _rawMerchantCode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPDWarsawMerchantIdentifier * _warsawIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
