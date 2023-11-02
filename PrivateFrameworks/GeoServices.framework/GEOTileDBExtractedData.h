
@interface GEOTileDBExtractedData : NSObject {
    GEOTileData * _data;
    NSUUID * _externalResourceUUID;
}

@property (nonatomic, readonly) GEOTileData *data;
@property (nonatomic, readonly) NSUUID *externalResourceUUID;

- (void).cxx_destruct;
- (id)data;
- (id)externalResourceUUID;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 externalResourceUUID:(id)arg2;

@end
