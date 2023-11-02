
@interface _SBRecentlyUsedSceneIdentityCache : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableOrderedSet * _recentPIDs;
    NSMutableDictionary * _recentSceneIdentityTokensByPID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSceneIdentityToken:(id)arg1 forPID:(int)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)promoteContainedSceneIdentityToken:(id)arg1 forPID:(int)arg2;
- (void)removeSceneIdentityToken:(id)arg1 forPID:(int)arg2;

@end
