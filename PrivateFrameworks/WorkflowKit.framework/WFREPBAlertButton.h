
@interface WFREPBAlertButton : PBCodable <NSCopying> {
    bool  _preferred;
    int  _style;
    NSString * _title;
}

@property (nonatomic) bool preferred;
@property (nonatomic) int style;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (int)StringAsStyle:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)preferred;
- (bool)readFrom:(id)arg1;
- (void)setPreferred:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
