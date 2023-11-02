
@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {
    NSURL * _directoryURL;
    NSMutableArray * _inProgressUUIDs;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _storingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateVersionsInfo;
- (void)dealloc;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(id /* block */)arg4;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(bool)arg4 isTransit:(bool)arg5 isTransparent:(bool)arg6 isNightMode:(bool)arg7 drawingBlock:(id /* block */)arg8;
- (id)initWithDirectoryURL:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;

@end
