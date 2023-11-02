
@interface WBSOnDeviceSearchSuggestionsModelManager : NSObject {
    WBSCoalescedAsynchronousWriter * _asyncWriter;
    NSMutableDictionary * _localeIdentifiersToChecksums;
    NSSet * _supportedLocaleIdentifiers;
}

@property (nonatomic, readonly) bool needsSupportedLocaleUpdate;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_dictionaryToSave;
- (void)_updateModelFileOnDisk;
- (void)addOrUpdateModelForLocale:(id)arg1 withChecksum:(id)arg2;
- (void)clearModels;
- (id)currentChecksumForModelWithLocale:(id)arg1;
- (id)fileURLForModelWithLocale:(id)arg1;
- (id)fileURLForModelWithLocaleIfDownloaded:(id)arg1;
- (bool)haveModelForLocale:(id)arg1;
- (id)init;
- (bool)isLocaleSupported:(id)arg1;
- (bool)needsSupportedLocaleUpdate;
- (void)updateSupportedModelLocales:(id)arg1;

@end
