
@interface WFPBSuspendShortcutEvent : PBCodable <NSCopying> {
    NSString * _dismissalType;
    NSString * _key;
    NSString * _presentationStyle;
}

@property (nonatomic, retain) NSString *dismissalType;
@property (nonatomic, readonly) bool hasDismissalType;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasPresentationStyle;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *presentationStyle;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissalType;
- (bool)hasDismissalType;
- (bool)hasKey;
- (bool)hasPresentationStyle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)presentationStyle;
- (bool)readFrom:(id)arg1;
- (void)setDismissalType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPresentationStyle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
