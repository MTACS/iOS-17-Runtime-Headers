
@interface GEORPInstructionCorrection : PBCodable <NSCopying> {
    NSString * _comments;
    struct { 
        unsigned int has_routeStepIndex : 1; 
        unsigned int has_routeStepSubstepIndex : 1; 
        unsigned int read_comments : 1; 
        unsigned int read_photoId : 1; 
        unsigned int read_photo : 1; 
        unsigned int read_routeStepScreenshotImageData : 1; 
        unsigned int read_routeStepScreenshotImageId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPPhotoWithMetadata * _photo;
    NSString * _photoId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _routeStepIndex;
    NSData * _routeStepScreenshotImageData;
    NSString * _routeStepScreenshotImageId;
    unsigned int  _routeStepSubstepIndex;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic, readonly) bool hasPhoto;
@property (nonatomic, readonly) bool hasPhotoId;
@property (nonatomic) bool hasRouteStepIndex;
@property (nonatomic, readonly) bool hasRouteStepScreenshotImageData;
@property (nonatomic, readonly) bool hasRouteStepScreenshotImageId;
@property (nonatomic) bool hasRouteStepSubstepIndex;
@property (nonatomic, retain) GEORPPhotoWithMetadata *photo;
@property (nonatomic, retain) NSString *photoId;
@property (nonatomic) unsigned int routeStepIndex;
@property (nonatomic, retain) NSData *routeStepScreenshotImageData;
@property (nonatomic, retain) NSString *routeStepScreenshotImageId;
@property (nonatomic) unsigned int routeStepSubstepIndex;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComments;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPhoto;
- (bool)hasPhotoId;
- (bool)hasRouteStepIndex;
- (bool)hasRouteStepScreenshotImageData;
- (bool)hasRouteStepScreenshotImageId;
- (bool)hasRouteStepSubstepIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (id)photoId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeStepIndex;
- (id)routeStepScreenshotImageData;
- (id)routeStepScreenshotImageId;
- (unsigned int)routeStepSubstepIndex;
- (void)setComments:(id)arg1;
- (void)setHasRouteStepIndex:(bool)arg1;
- (void)setHasRouteStepSubstepIndex:(bool)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setRouteStepIndex:(unsigned int)arg1;
- (void)setRouteStepScreenshotImageData:(id)arg1;
- (void)setRouteStepScreenshotImageId:(id)arg1;
- (void)setRouteStepSubstepIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
