
@interface _SFPBButtonItem : PBCodable <NSSecureCoding, _SFPBButtonItem> {
    _SFPBAppAutoShortcutsButtonItem * _appActionsButtonItem;
    _SFPBCommandButtonItem * _commandButtonItem;
    _SFPBContactButtonItem * _contactButtonItem;
    _SFPBCoreSpotlightButtonItem * _coreSpotlightButtonItem;
    unsigned long long  _uniqueId;
    _SFPBWatchListButtonItem * _watchListButtonItem;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBAppAutoShortcutsButtonItem *appActionsButtonItem;
@property (nonatomic, retain) _SFPBCommandButtonItem *commandButtonItem;
@property (nonatomic, retain) _SFPBContactButtonItem *contactButtonItem;
@property (nonatomic, retain) _SFPBCoreSpotlightButtonItem *coreSpotlightButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;
@property (nonatomic, retain) _SFPBWatchListButtonItem *watchListButtonItem;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)appActionsButtonItem;
- (id)commandButtonItem;
- (id)contactButtonItem;
- (id)coreSpotlightButtonItem;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppActionsButtonItem:(id)arg1;
- (void)setCommandButtonItem:(id)arg1;
- (void)setContactButtonItem:(id)arg1;
- (void)setCoreSpotlightButtonItem:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (void)setWatchListButtonItem:(id)arg1;
- (unsigned long long)uniqueId;
- (id)watchListButtonItem;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
