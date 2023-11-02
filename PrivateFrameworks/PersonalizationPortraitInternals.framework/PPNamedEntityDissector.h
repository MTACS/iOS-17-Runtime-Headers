
@interface PPNamedEntityDissector : NSObject {
    int  _linguisticDataNotificationToken;
    _PASLock * _lock;
    NSString * _meCardContactsIdentifier;
    bool  _userIsMultilingual;
    NSString * _userLanguage;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_collectAugmentedGazetteerWithText:(id)arg1 addNamedEntity:(id /* block */)arg2 addTopic:(id /* block */)arg3 addLocation:(id /* block */)arg4;
- (id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 isMessagesSource:(bool)arg3 addNamedEntity:(id /* block */)arg4;
- (void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 enrichment:(id)arg4 algorithm:(unsigned short)arg5;
- (void)_registerForNotifications;
- (void)_resetGazetteer;
- (void)dealloc;
- (id)entitiesInPlainText:(id)arg1 eligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(bool)arg4;
- (id)entitiesInPlainText:(id)arg1 eligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(bool)arg4 algorithms:(id)arg5;
- (id)init;
- (id)initWithPurgeableGazetteer:(id)arg1;

@end
