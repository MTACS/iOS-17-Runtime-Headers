
@interface BMLibraryStreamsPruner : NSObject

+ (id)_interactionIdentifierFromObject:(id)arg1;
+ (void)_pruneStreamWithIdentifier:(id)arg1 policy:(id)arg2 shouldPruneBlock:(id /* block */)arg3;
+ (id)bundleIdentifiersFromStoreEvent:(id)arg1;
+ (id)intentGroupIdentifierFromStoreEvent:(id)arg1;
+ (id)intentIdentifierFromStoreEvent:(id)arg1;
+ (id)isDonatedBySiriFromStoreEvent:(id)arg1;
+ (void)pruneForResetKeyboardDictionary;
+ (void)pruneForResetPrivacyAndLocationWarnings;
+ (void)pruneLearnFromThisAppDisabled:(id)arg1;
+ (void)pruneSiriAndDictationHistory;
+ (void)pruneSiriDisabled;
+ (void)pruneWithDeletedIntentGroupIdentifiers:(id)arg1 bundleId:(id)arg2;
+ (void)pruneWithDeletedIntentIdentifiers:(id)arg1 bundleId:(id)arg2;
+ (void)pruneWithInstalledApplications:(id)arg1 installedAppExtensions:(id)arg2;
+ (void)pruneWithUninstalledBundleIdentifier:(id)arg1;
+ (bool)shouldPruneStoreEvent:(id)arg1 forDeletedGroupIdentifiers:(id)arg2 bundleId:(id)arg3;
+ (bool)shouldPruneStoreEvent:(id)arg1 forDeletedIntentIdentifiers:(id)arg2 bundleId:(id)arg3;
+ (bool)shouldPruneStoreEvent:(id)arg1 forInstalledApplications:(id)arg2 installedAppExtensions:(id)arg3;
+ (bool)shouldPruneStoreEvent:(id)arg1 forLearnFromThisAppDisabledBundleIdentifiers:(id)arg2;
+ (bool)shouldPruneStoreEvent:(id)arg1 forUninstalledBundleId:(id)arg2;
+ (bool)shouldPruneStoreEventForSiriAndDictationHistoryDeletion:(id)arg1;
+ (bool)shouldPruneStoreEventForSiriDisabled:(id)arg1;

@end
