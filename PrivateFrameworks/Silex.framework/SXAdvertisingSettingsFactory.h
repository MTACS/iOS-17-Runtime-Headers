
@interface SXAdvertisingSettingsFactory : NSObject <SXAdvertisingSettingsFactory> {
    <SXDebugAdvertisementSettingsProvider> * _debugSettingsProvider;
    <SXDocumentProviding> * _documentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SXDebugAdvertisementSettingsProvider> *debugSettingsProvider;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg1;
- (id)debugSettingsProvider;
- (id)documentProvider;
- (id)initWithDocumentProvider:(id)arg1 debugSettingsProvider:(id)arg2;

@end
