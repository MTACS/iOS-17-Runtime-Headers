
@interface NTPBDiscoverMoreVideosInfo : PBCodable <NSCopying> {
    NSString * _actionURLString;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *actionURLString;
@property (nonatomic, readonly) bool hasActionURLString;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (id)actionURLString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionURLString;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionURLString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

@end
