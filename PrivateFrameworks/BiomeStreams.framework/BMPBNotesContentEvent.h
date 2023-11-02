
@interface BMPBNotesContentEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _content;
    NSString * _contentProtection;
    NSString * _domainId;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _personaId;
    NSString * _title;
    NSString * _uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *contentProtection;
@property (nonatomic, retain) NSString *domainId;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasContentProtection;
@property (nonatomic, readonly) bool hasDomainId;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueId;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)content;
- (id)contentProtection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainId;
- (bool)hasAbsoluteTimestamp;
- (bool)hasContent;
- (bool)hasContentProtection;
- (bool)hasDomainId;
- (bool)hasPersonaId;
- (bool)hasTitle;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personaId;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setContent:(id)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)title;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
