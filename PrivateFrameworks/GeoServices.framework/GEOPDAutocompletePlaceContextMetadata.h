
@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying> {
    NSMutableArray * _alternateSearchableNames;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clientizationFeatures;
    unsigned int  _distanceDisplayThreshold;
    bool  _enableChildPoisWithoutAcRank;
    bool  _enableLookInsideActionForVenuePois;
    struct { 
        unsigned int has_distanceDisplayThreshold : 1; 
        unsigned int has_requestedShortAddressType : 1; 
        unsigned int has_taxonomyTypeForClientization : 1; 
        unsigned int has_enableChildPoisWithoutAcRank : 1; 
        unsigned int has_enableLookInsideActionForVenuePois : 1; 
        unsigned int has_isDefaultName : 1; 
        unsigned int has_isLookAroundActionAllowed : 1; 
        unsigned int has_isProminentResult : 1; 
        unsigned int has_shouldEnableCallAction : 1; 
        unsigned int has_shouldEnableWebsiteAction : 1; 
        unsigned int has_shouldSuppressDirectionsAction : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientizationFeatures : 1; 
        unsigned int read_alternateSearchableNames : 1; 
        unsigned int read_inferredCategory : 1; 
        unsigned int read_matchedDisplayNameLanguageCode : 1; 
        unsigned int read_matchedDisplayName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _inferredCategory;
    bool  _isDefaultName;
    bool  _isLookAroundActionAllowed;
    bool  _isProminentResult;
    NSString * _matchedDisplayName;
    NSString * _matchedDisplayNameLanguageCode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestedShortAddressType;
    bool  _shouldEnableCallAction;
    bool  _shouldEnableWebsiteAction;
    bool  _shouldSuppressDirectionsAction;
    int  _taxonomyTypeForClientization;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
