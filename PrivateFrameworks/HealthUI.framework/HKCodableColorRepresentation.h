
@interface HKCodableColorRepresentation : PBCodable <NSCopying> {
    long long  _displayCategoryIdentifier;
    struct APPLE_HKCodableColorRepresentation_1 { 
        unsigned int displayCategoryIdentifier : 1; 
    }  _has;
    NSString * _objectTypeIdentifier;
    NSString * _semanticColorName;
}

@property (nonatomic) long long displayCategoryIdentifier;
@property (nonatomic) bool hasDisplayCategoryIdentifier;
@property (nonatomic, readonly) bool hasObjectTypeIdentifier;
@property (nonatomic, readonly) bool hasSemanticColorName;
@property (nonatomic, retain) NSString *objectTypeIdentifier;
@property (nonatomic, retain) NSString *semanticColorName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)displayCategoryIdentifier;
- (bool)hasDisplayCategoryIdentifier;
- (bool)hasObjectTypeIdentifier;
- (bool)hasSemanticColorName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (id)semanticColorName;
- (void)setDisplayCategoryIdentifier:(long long)arg1;
- (void)setHasDisplayCategoryIdentifier:(bool)arg1;
- (void)setObjectTypeIdentifier:(id)arg1;
- (void)setSemanticColorName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
