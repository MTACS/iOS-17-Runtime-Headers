
@interface _SFPBPerformContactActionCommand : PBCodable <NSSecureCoding, _SFPBPerformContactActionCommand> {
    int  _contactActionType;
    bool  _didDisplayHandleOptions;
    bool  _didSelectFromOptionsMenu;
}

@property (nonatomic) int contactActionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisplayHandleOptions;
@property (nonatomic) bool didSelectFromOptionsMenu;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (int)contactActionType;
- (id)dictionaryRepresentation;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
