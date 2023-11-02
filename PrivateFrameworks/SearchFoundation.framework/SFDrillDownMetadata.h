
@interface SFDrillDownMetadata : NSObject <NSCopying, NSSecureCoding, SFDrillDownMetadata> {
    NSArray * _cardDomains;
    NSString * _cardIdentifier;
    NSArray * _cardIdentifiers;
    SFCardMetadata * _cardOnlyMetadata;
    SFCardSearchMetadata * _cardSearchMetadata;
    NSString * _debugParams;
    SFEntitySearchMetadata * _entitySearchMetadata;
    SFEntitySearchMetadata * _entitySearchOnlyMetadata;
    struct { 
        unsigned int cardOnlyMetadata : 1; 
        unsigned int entitySearchOnlyMetadata : 1; 
        unsigned int cardSearchMetadata : 1; 
        unsigned int entitySearchMetadata : 1; 
    }  _has;
    NSString * _qtype;
    NSString * _viewConfigName;
}

@property (nonatomic, copy) NSArray *cardDomains;
@property (nonatomic, copy) NSString *cardIdentifier;
@property (nonatomic, copy) NSArray *cardIdentifiers;
@property (nonatomic, retain) SFCardMetadata *cardOnlyMetadata;
@property (nonatomic, retain) SFCardSearchMetadata *cardSearchMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugParams;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFEntitySearchMetadata *entitySearchMetadata;
@property (nonatomic, retain) SFEntitySearchMetadata *entitySearchOnlyMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *qtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewConfigName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardDomains;
- (id)cardIdentifier;
- (id)cardIdentifiers;
- (id)cardOnlyMetadata;
- (id)cardSearchMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugParams;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entitySearchMetadata;
- (id)entitySearchOnlyMetadata;
- (bool)hasCardOnlyMetadata;
- (bool)hasCardSearchMetadata;
- (bool)hasEntitySearchMetadata;
- (bool)hasEntitySearchOnlyMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qtype;
- (void)setCardDomains:(id)arg1;
- (void)setCardIdentifier:(id)arg1;
- (void)setCardIdentifiers:(id)arg1;
- (void)setCardOnlyMetadata:(id)arg1;
- (void)setCardSearchMetadata:(id)arg1;
- (void)setDebugParams:(id)arg1;
- (void)setEntitySearchMetadata:(id)arg1;
- (void)setEntitySearchOnlyMetadata:(id)arg1;
- (void)setQtype:(id)arg1;
- (void)setViewConfigName:(id)arg1;
- (id)viewConfigName;

@end
