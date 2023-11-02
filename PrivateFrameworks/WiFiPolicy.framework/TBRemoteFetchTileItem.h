
@interface TBRemoteFetchTileItem : NSObject <TBFetchResponseTileItem> {
    NSError * _error;
    NSArray * _networks;
    unsigned long long  _status;
    <TBTile> * _tile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *networks;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TBTile> *tile;

- (void).cxx_destruct;
- (id)error;
- (id)initWithEmptyTileKey:(unsigned long long)arg1 etag:(id)arg2 error:(id)arg3;
- (id)initWithTile:(id)arg1 status:(unsigned long long)arg2 etag:(id)arg3 error:(id)arg4;
- (id)networks;
- (unsigned long long)status;
- (id)tile;

@end
