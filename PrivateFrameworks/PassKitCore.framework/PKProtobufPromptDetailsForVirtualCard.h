
@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying> {
    struct { 
        unsigned int showNotification : 1; 
    }  _has;
    NSString * _identifier;
    bool  _showNotification;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasShowNotification;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool showNotification;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasShowNotification;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShowNotification:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShowNotification:(bool)arg1;
- (bool)showNotification;
- (void)writeTo:(id)arg1;

@end
