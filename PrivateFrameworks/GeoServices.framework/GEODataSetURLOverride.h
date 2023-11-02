
@interface GEODataSetURLOverride : PBCodable <NSCopying> {
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSString * _announcementsURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _businessPortalBaseURL;
    unsigned int  _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    struct { 
        unsigned int has_dataSet : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressCorrectionInitURL : 1; 
        unsigned int read_addressCorrectionUpdateURL : 1; 
        unsigned int read_announcementsURL : 1; 
        unsigned int read_batchReverseGeocoderURL : 1; 
        unsigned int read_businessPortalBaseURL : 1; 
        unsigned int read_directionsURL : 1; 
        unsigned int read_dispatcherURL : 1; 
        unsigned int read_etaURL : 1; 
        unsigned int read_logMessageUsageURL : 1; 
        unsigned int read_problemCategoriesURL : 1; 
        unsigned int read_problemOptInURL : 1; 
        unsigned int read_problemStatusURL : 1; 
        unsigned int read_problemSubmissionURL : 1; 
        unsigned int read_simpleETAURL : 1; 
        unsigned int read_spatialLookupURL : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _logMessageUsageURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
    PBUnknownFields * _unknownFields;
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
