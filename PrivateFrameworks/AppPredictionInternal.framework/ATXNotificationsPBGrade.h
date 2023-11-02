
@interface ATXNotificationsPBGrade : PBCodable <NSCopying> {
    NSString * _category;
    NSString * _rating;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasRating;
@property (nonatomic, retain) NSString *rating;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasRating;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rating;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setRating:(id)arg1;
- (void)writeTo:(id)arg1;

@end
