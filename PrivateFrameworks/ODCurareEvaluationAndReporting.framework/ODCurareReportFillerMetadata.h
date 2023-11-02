
@interface ODCurareReportFillerMetadata : PBCodable <NSCopying> {
    NSString * _date;
    NSString * _selectedModelName;
}

@property (nonatomic, retain) NSString *date;
@property (nonatomic, retain) NSString *selectedModelName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedModelName;
- (void)setDate:(id)arg1;
- (void)setSelectedModelName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
