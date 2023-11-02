
@interface SSRVoiceProfileStoreCleaner : NSObject

- (id)_cleanupAppDomain:(id)arg1;
- (id)_cleanupContentsOfSatFolder:(id)arg1;
- (id)_cleanupImplicitUtteranceCacheForProfile:(id)arg1;
- (id)_cleanupInvalidAudioFiles:(id)arg1;
- (void)_cleanupModelFilesAtDir:(id)arg1 forAssetArray:(id)arg2;
- (id)_cleanupOrphanedMetafilesAtURL:(id)arg1;
- (id)_cleanupOrphanedMetafilesForProfile:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2;
- (id)_cleanupPayloadUtterancesFromProfile:(id)arg1 forModelType:(unsigned long long)arg2 exceedingLifeTimeInDays:(long long)arg3;
- (id)_cleanuplanguageCodePath:(id)arg1 forAppDomain:(id)arg2;
- (void)cleanupInvalidModelsForProfile:(id)arg1 withAssetArray:(id)arg2;
- (id)cleanupProfileStore;
- (id)deleteInvalidSiriProfilesFromPersonalDevicesForLanguage:(id)arg1 appDomain:(id)arg2;
- (id)filterDuplicatedSiriProfilesFrom:(id)arg1;
- (id)filterInvalidSiriProfilesFrom:(id)arg1;

@end
