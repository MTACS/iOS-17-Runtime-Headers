
@interface _SFReaderFontOptionsGroupController : NSObject <_SFSettingsAlertOptionsGroupController> {
    NSObject<OS_dispatch_queue> * _fontInstallationStatusQueue;
    double  _fontSize;
    NSMutableDictionary * _fontToItemDictionary;
    <SFReaderContext> * _readerContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SFReaderContext> *readerContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)_attributedStringForReaderFont:(id)arg1;
- (id)_downloadAccessoryForNotification:(id)arg1;
- (void)_fontDownloadDidBegin:(id)arg1;
- (void)_fontDownloadDidFail:(id)arg1;
- (void)_fontDownloadDidFinish:(id)arg1;
- (void)_fontDownloadProgressDidChange:(id)arg1;
- (id)_fontForFontNotification:(id)arg1;
- (bool)_fontIsImmediatelyAvailable:(id)arg1;
- (id)_itemForNotification:(id)arg1;
- (id)attributedStringForValue:(id)arg1;
- (id)initWithReaderContext:(id)arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)prepareItem:(id)arg1 forValue:(id)arg2;
- (id)readerContext;
- (void)setSelectedValue:(id)arg1;
- (id)textStyleForValue:(id)arg1;
- (id)values;

@end
