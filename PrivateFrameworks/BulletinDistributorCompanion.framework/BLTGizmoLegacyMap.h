
@interface BLTGizmoLegacyMap : NSObject {
    NSMutableDictionary * _gizmoBulletinKeyMap;
    NSMutableDictionary * _phoneBulletinKeyMap;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_addMapKey:(id)arg1 value:(id)arg2 bulletinKey:(id)arg3 version:(unsigned long long)arg4 versionDictionary:(id)arg5;
- (id)categoryIDForBulletinKey:(id)arg1;
- (id)gizmoPublisherBulletinIDForPhoneKey:(id)arg1;
- (id)gizmoSectionInfoForPhoneKey:(id)arg1;
- (id)init;
- (void)mapNotification:(id)arg1 sectionID:(id)arg2;
- (id)phonePublisherBulletinIDForGizmoKey:(id)arg1;
- (id)phoneSectionIDForGizmoKey:(id)arg1;
- (id)sectionSubtypeForBulletinKey:(id)arg1;
- (void)unmapNotification:(id)arg1 sectionID:(id)arg2;

@end
