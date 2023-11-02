
@interface MUDownloadOfflineActionRowItemViewModel : MUActionRowItemViewModel <MUOfflineMapProviderObserver> {
    NSByteCountFormatter * _byteCountFormatter;
    <MUOfflineMapProvider> * _offlineMapProvider;
    MUCircleProgressObservingView * _progressView;
}

@property (nonatomic, readonly) unsigned long long actionItemType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUOfflineMapProvider> *offlineMapProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessoryView;
- (unsigned long long)actionItemType;
- (id)byteCountFormatter;
- (void)dealloc;
- (id)initWithOfflineMapProvider:(id)arg1;
- (bool)isEnabled;
- (id)offlineMapProvider;
- (void)offlineMapProviderUpdated:(id)arg1;
- (id)progressView;
- (void)setOfflineMapProvider:(id)arg1;
- (id)symbolName;
- (id)titleText;

@end
