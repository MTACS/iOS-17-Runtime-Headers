
@interface _SFPBClearProactiveCategoryCommand : PBCodable <NSSecureCoding, _SFPBClearProactiveCategoryCommand> {
    int  _category;
    NSString * _proactiveIdentifier;
    bool  _shouldClearWholeSection;
}

@property (nonatomic) int category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *proactiveIdentifier;
@property (nonatomic) bool shouldClearWholeSection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)category;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)proactiveIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setProactiveIdentifier:(id)arg1;
- (void)setShouldClearWholeSection:(bool)arg1;
- (bool)shouldClearWholeSection;
- (void)writeTo:(id)arg1;

@end
