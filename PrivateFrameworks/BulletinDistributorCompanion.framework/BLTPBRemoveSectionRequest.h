
@interface BLTPBRemoveSectionRequest : PBRequest <NSCopying> {
    NSString * _sectionID;
}

@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
