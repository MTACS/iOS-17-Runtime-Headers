
@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    GEOLocation * _location;
    unsigned short  _mcc;
    unsigned short  _mnc;
    unsigned long long  _options;
    NSMapTable * _resultItems;
    NSArray * _tileDatas;
    int  _tileStyle;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchMetadataWithResponseQueue:(id)arg1 block:(id /* block */)arg2;
- (id)initForTileStyle:(int)arg1 location:(id)arg2 options:(unsigned long long)arg3;
- (id)initForTileStyle:(int)arg1 mcc:(unsigned short)arg2 mnc:(unsigned short)arg3 location:(id)arg4 options:(unsigned long long)arg5;
- (void)reportCorrupt:(id)arg1;

@end
