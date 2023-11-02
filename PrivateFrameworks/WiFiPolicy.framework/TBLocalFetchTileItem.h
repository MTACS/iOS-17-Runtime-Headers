
@interface TBLocalFetchTileItem : NSObject <TBFetchResponseTileItem> {
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
- (id)initWithTile:(id)arg1 error:(id)arg2;
- (id)networks;
- (unsigned long long)status;
- (id)tile;

@end
