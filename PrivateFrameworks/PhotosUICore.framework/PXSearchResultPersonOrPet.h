
@interface PXSearchResultPersonOrPet : NSObject <PXNewSearchResult> {
    unsigned long long  _assetCount;
    NSString * _identifier;
    NSString * _personUUID;
    NSString * _subtitle;
    unsigned long long  _subtype;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *personUUID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) unsigned long long subtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

+ (id)uniqueIdentiferFromPersonUUID:(id)arg1 displayName:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 assetCount:(unsigned long long)arg2 personUUID:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 subtype:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)personUUID;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPersonUUID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtype:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)subtitle;
- (unsigned long long)subtype;
- (id)title;
- (unsigned long long)type;

@end
