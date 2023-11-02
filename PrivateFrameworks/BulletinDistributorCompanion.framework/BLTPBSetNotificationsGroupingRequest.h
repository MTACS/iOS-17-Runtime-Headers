
@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying> {
    int  _grouping;
    struct { 
        unsigned int grouping : 1; 
    }  _has;
    NSString * _sectionID;
}

@property (nonatomic) int grouping;
@property (nonatomic) bool hasGrouping;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (int)StringAsGrouping:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)grouping;
- (id)groupingAsString:(int)arg1;
- (bool)hasGrouping;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setGrouping:(int)arg1;
- (void)setHasGrouping:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
