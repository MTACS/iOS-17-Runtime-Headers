
@interface HDCloudSyncCodableAttachmentReferenceTombstone : PBCodable <NSCopying> {
    double  _creationDate;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    NSString * _referenceIdentifier;
    NSString * _schemaIdentifier;
}

@property (nonatomic) double creationDate;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasReferenceIdentifier;
@property (nonatomic, readonly) bool hasSchemaIdentifier;
@property (nonatomic, retain) NSString *referenceIdentifier;
@property (nonatomic, retain) NSString *schemaIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreationDate;
- (bool)hasReferenceIdentifier;
- (bool)hasSchemaIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceIdentifier;
- (id)schemaIdentifier;
- (void)setCreationDate:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setSchemaIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
