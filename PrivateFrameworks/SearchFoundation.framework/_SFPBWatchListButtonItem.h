
@interface _SFPBWatchListButtonItem : PBCodable <NSSecureCoding, _SFPBWatchListButtonItem> {
    unsigned long long  _uniqueId;
    _SFPBWatchListItem * _watchListItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;
@property (nonatomic, retain) _SFPBWatchListItem *watchListItem;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (void)setWatchListItem:(id)arg1;
- (unsigned long long)uniqueId;
- (id)watchListItem;
- (void)writeTo:(id)arg1;

@end
