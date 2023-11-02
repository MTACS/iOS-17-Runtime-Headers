
@interface PPPBLabeledSocialProfile : PBCodable <NSCopying> {
    NSString * _label;
    NSString * _service;
    NSString * _urlString;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic, readonly) bool hasUrlString;
@property (nonatomic, readonly) bool hasUserIdentifier;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *service;
@property (nonatomic, retain) NSString *urlString;
@property (nonatomic, retain) NSString *userIdentifier;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasService;
- (bool)hasUrlString;
- (bool)hasUserIdentifier;
- (bool)hasUsername;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setLabel:(id)arg1;
- (void)setService:(id)arg1;
- (void)setUrlString:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)urlString;
- (id)userIdentifier;
- (id)username;
- (void)writeTo:(id)arg1;

@end
