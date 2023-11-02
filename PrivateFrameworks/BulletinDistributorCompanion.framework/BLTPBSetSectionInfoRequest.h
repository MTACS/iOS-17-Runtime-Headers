
@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying> {
    NSMutableArray * _keypaths;
    BLTPBSectionInfo * _sectionInfo;
}

@property (nonatomic, readonly) bool hasSectionInfo;
@property (nonatomic, retain) NSMutableArray *keypaths;
@property (nonatomic, retain) BLTPBSectionInfo *sectionInfo;

+ (Class)keypathsType;

- (void).cxx_destruct;
- (void)addKeypaths:(id)arg1;
- (void)clearKeypaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keypaths;
- (id)keypathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keypathsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionInfo;
- (void)setKeypaths:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
