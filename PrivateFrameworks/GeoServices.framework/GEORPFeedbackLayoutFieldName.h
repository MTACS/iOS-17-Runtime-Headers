
@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying> {
    int  _addressFieldName;
    int  _curatedCollectionFieldName;
    struct { 
        unsigned int has_addressFieldName : 1; 
        unsigned int has_curatedCollectionFieldName : 1; 
        unsigned int has_groundviewFieldName : 1; 
        unsigned int has_incidentType : 1; 
        unsigned int has_otherFieldName : 1; 
        unsigned int has_poiFieldName : 1; 
        unsigned int has_poiImageCorrectionType : 1; 
        unsigned int has_workflowFieldName : 1; 
    }  _flags;
    int  _groundviewFieldName;
    GEORPIncidentField * _incidentField;
    int  _incidentType;
    int  _otherFieldName;
    int  _poiFieldName;
    int  _poiImageCorrectionType;
    int  _workflowFieldName;
}

@property (nonatomic) int addressFieldName;
@property (nonatomic) int curatedCollectionFieldName;
@property (nonatomic) int groundviewFieldName;
@property (nonatomic) bool hasAddressFieldName;
@property (nonatomic) bool hasCuratedCollectionFieldName;
@property (nonatomic) bool hasGroundviewFieldName;
@property (nonatomic, readonly) bool hasIncidentField;
@property (nonatomic) bool hasIncidentType;
@property (nonatomic) bool hasOtherFieldName;
@property (nonatomic) bool hasPoiFieldName;
@property (nonatomic) bool hasPoiImageCorrectionType;
@property (nonatomic) bool hasWorkflowFieldName;
@property (nonatomic, retain) GEORPIncidentField *incidentField;
@property (nonatomic) int incidentType;
@property (nonatomic) int otherFieldName;
@property (nonatomic) int poiFieldName;
@property (nonatomic) int poiImageCorrectionType;
@property (nonatomic) int workflowFieldName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddressFieldName:(id)arg1;
- (int)StringAsCuratedCollectionFieldName:(id)arg1;
- (int)StringAsGroundviewFieldName:(id)arg1;
- (int)StringAsIncidentType:(id)arg1;
- (int)StringAsOtherFieldName:(id)arg1;
- (int)StringAsPoiFieldName:(id)arg1;
- (int)StringAsPoiImageCorrectionType:(id)arg1;
- (int)StringAsWorkflowFieldName:(id)arg1;
- (int)addressFieldName;
- (id)addressFieldNameAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)curatedCollectionFieldName;
- (id)curatedCollectionFieldNameAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)groundviewFieldName;
- (id)groundviewFieldNameAsString:(int)arg1;
- (bool)hasAddressFieldName;
- (bool)hasCuratedCollectionFieldName;
- (bool)hasGroundviewFieldName;
- (bool)hasIncidentField;
- (bool)hasIncidentType;
- (bool)hasOtherFieldName;
- (bool)hasPoiFieldName;
- (bool)hasPoiImageCorrectionType;
- (bool)hasWorkflowFieldName;
- (unsigned long long)hash;
- (id)incidentField;
- (int)incidentType;
- (id)incidentTypeAsString:(int)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)otherFieldName;
- (id)otherFieldNameAsString:(int)arg1;
- (int)poiFieldName;
- (id)poiFieldNameAsString:(int)arg1;
- (int)poiImageCorrectionType;
- (id)poiImageCorrectionTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressFieldName:(int)arg1;
- (void)setCuratedCollectionFieldName:(int)arg1;
- (void)setGroundviewFieldName:(int)arg1;
- (void)setHasAddressFieldName:(bool)arg1;
- (void)setHasCuratedCollectionFieldName:(bool)arg1;
- (void)setHasGroundviewFieldName:(bool)arg1;
- (void)setHasIncidentType:(bool)arg1;
- (void)setHasOtherFieldName:(bool)arg1;
- (void)setHasPoiFieldName:(bool)arg1;
- (void)setHasPoiImageCorrectionType:(bool)arg1;
- (void)setHasWorkflowFieldName:(bool)arg1;
- (void)setIncidentField:(id)arg1;
- (void)setIncidentType:(int)arg1;
- (void)setOtherFieldName:(int)arg1;
- (void)setPoiFieldName:(int)arg1;
- (void)setPoiImageCorrectionType:(int)arg1;
- (void)setWorkflowFieldName:(int)arg1;
- (int)workflowFieldName;
- (id)workflowFieldNameAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
