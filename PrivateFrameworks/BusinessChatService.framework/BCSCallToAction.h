
@interface BCSCallToAction : PBCodable <NSCopying> {
    NSString * _body;
    struct { 
        unsigned int isDefault : 1; 
    }  _has;
    bool  _isDefault;
    NSString * _language;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic) bool hasIsDefault;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool isDefault;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasIsDefault;
- (bool)hasLanguage;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setHasIsDefault:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

@end
