
@interface SGM2UnknownContactInformationShown : PBCodable <NSCopying> {
    int  _app;
    bool  _didInteractionLookup;
    struct { 
        unsigned int app : 1; 
        unsigned int wasSuggestedContact : 1; 
        unsigned int didInteractionLookup : 1; 
    }  _has;
    NSString * _key;
    bool  _wasSuggestedContact;
}

@property (nonatomic) int app;
@property (nonatomic) bool didInteractionLookup;
@property (nonatomic) bool hasApp;
@property (nonatomic) bool hasDidInteractionLookup;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasWasSuggestedContact;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool wasSuggestedContact;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didInteractionLookup;
- (bool)hasApp;
- (bool)hasDidInteractionLookup;
- (bool)hasKey;
- (bool)hasWasSuggestedContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(int)arg1;
- (void)setDidInteractionLookup:(bool)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setHasDidInteractionLookup:(bool)arg1;
- (void)setHasWasSuggestedContact:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setWasSuggestedContact:(bool)arg1;
- (bool)wasSuggestedContact;
- (void)writeTo:(id)arg1;

@end
