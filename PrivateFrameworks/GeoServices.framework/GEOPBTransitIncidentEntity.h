
@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    unsigned long long  _affectedMuid;
    GEOPBTransitIncidentEntityFilter * _filter;
    struct { 
        unsigned int has_affectedMuid : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNextStopIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNextStopIDs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)muid;
- (id)nextStopIDs;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
