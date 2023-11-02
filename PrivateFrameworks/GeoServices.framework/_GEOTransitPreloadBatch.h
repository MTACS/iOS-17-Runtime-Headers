
@interface _GEOTransitPreloadBatch : NSObject {
    NSMutableArray * _latLngToLoad;
    NSMutableSet * _placeDatasToLoad;
    GEOTileKeyList * _tilesToLoad;
    unsigned long long  bytesLoaded;
    unsigned long long  bytesLoadedFromNetwork;
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  coords;
    double  endTime;
    double  endTimeForScheduleFreshness;
    unsigned long long  errCount;
    unsigned long long  generation;
    <GEOMapServiceTicket> * placeDataRequestTicketForBatch;
    unsigned int  priority;
    double  startTime;
    unsigned long long  status;
}

@property (nonatomic, retain) NSMutableSet *placeDatasToLoad;
@property (nonatomic, retain) GEOTileKeyList *tilesToLoad;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (double)networkDataRateKB;
- (id)placeDatasToLoad;
- (void)setPlaceDatasToLoad:(id)arg1;
- (void)setTilesToLoad:(id)arg1;
- (id)tilesToLoad;

@end
