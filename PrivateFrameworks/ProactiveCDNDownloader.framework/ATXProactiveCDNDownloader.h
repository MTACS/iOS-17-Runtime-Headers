
@interface ATXProactiveCDNDownloader : NSObject <ATXProactiveCDNDownloaderProtocol, CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _clQueue;
    CLLocationManager * _locManager;
    NSData * _previousItemHandle;
    NSArray * _previousPreciseHeroDatas;
    NSObject<OS_dispatch_queue> * _queue;
    <ATXGEOTileDataReaderProtocol> * _tileDataReader;
    <ATXGEOTileLoaderProtocol> * _tileLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ATXGEOTileDataReaderProtocol> *tileDataReader;
@property (nonatomic, readonly) <ATXGEOTileLoaderProtocol> *tileLoader;

- (void).cxx_destruct;
- (void)_heroDatasForLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)heroDatasForLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)highConfidenceHeroDatasForCurrentLocationWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithTileLoader:(id)arg1 tileDataReader:(id)arg2;
- (id)queue;
- (id)sha256HashForText:(id)arg1;
- (id)tileDataReader;
- (id)tileLoader;

@end
