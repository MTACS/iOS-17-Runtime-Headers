
@interface _GEOSingleTileSetMapRegionTileKeyEnumerator : NSObject <GEOTileKeyEnumerator> {
    unsigned int  _currentOffset;
    unsigned long long  _currentZIndex;
    GEOMapRegion * _region;
    int  _scale;
    int  _size;
    int  _style;
    NSArray * _zoomLevels;
    long long  _zoomMode;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)continueEnumeratingTileKeysWithBlock:(id /* block */)arg1;
- (unsigned long long)count;
- (id)initWithMapRegion:(id)arg1 tileSet:(id)arg2 zoomMode:(long long)arg3;

@end
