
@interface BCSCallerIdLocalizedString : PBCodable <NSCopying> {
    struct { 
        unsigned int isDefault : 1; 
    }  _has;
    bool  _isDefault;
    NSString * _locale;
    NSString * _text;
}

@property (nonatomic) bool hasIsDefault;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic) bool isDefault;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDefault;
- (bool)hasLocale;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDefault:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
