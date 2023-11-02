
@interface TPSOfflineContentManager : NSObject {
    <TPSOfflineContentManagerDelegate> * _delegate;
    NSBundle * _frameworkBundle;
    NSString * _lastProcessedLocalIdentifier;
    NSDictionary * _offlineContentMap;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <TPSOfflineContentManagerDelegate> *delegate;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (nonatomic, retain) NSString *lastProcessedLocalIdentifier;
@property (nonatomic, retain) NSDictionary *offlineContentMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)_localFormattedDataForURL:(id)arg1;
- (void)cacheEligibleContentWithMetadata:(id)arg1 tipStatusController:(id)arg2 miniTipsMap:(id)arg3 tipsDeliveryInfoMap:(id)arg4 deliveryInfoMap:(id)arg5;
- (id)contentForIdentifier:(id)arg1;
- (id)delegate;
- (id)frameworkBundle;
- (id)init;
- (id)lastProcessedLocalIdentifier;
- (id)offlineContentMap;
- (void)removeCacheContent;
- (void)removeOfflineContentForIdentifier:(id)arg1;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setLastProcessedLocalIdentifier:(id)arg1;
- (void)setOfflineContentMap:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (bool)shouldProcessRemoteContentWithIdentifier:(id)arg1;
- (void)updateOfflineContent;
- (void)updateOfflineContentMap:(id)arg1;

@end
