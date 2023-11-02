
@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource <NTKCompanionAppLibraryObserver, NTKComplicationCollectionObserver> {
    NTKCompanionAppLibrary * _appLibrary;
    NTKComplicationCollection * _complicationCollection;
    CLKComplicationTemplate * _complicationTemplate;
    NTKSampleComplicationDataSource * _stocksDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_invalidate;
- (void)_invalidateIfComplicationCorrespondsToApp:(id)arg1;
- (void)_loadCollection;
- (bool)_remoteIsCompanion;
- (id)_templateFromApp:(id)arg1;
- (void)appLibrary:(id)arg1 didAddApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateApp:(id)arg2;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end
