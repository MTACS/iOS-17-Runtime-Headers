
@protocol BBObserverDelegate <NSObject>

@optional

- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(void *)arg1 addBulletin:(void *)arg2 forFeed:(void *)arg3 playLightsAndSirens:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 10: BBObserver *, BBBulletin *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 noteBulletinsLoadedForSectionID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 noteInvalidatedBulletinIDs:(NSSet *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(BBSectionParameters *)arg2 forSectionID:(NSString *)arg3;
- (void)observer:(BBObserver *)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(BBObserver *)arg1 noteServerReceivedResponseForBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 removeSection:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 updateGlobalSettings:(BBGlobalSettings *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;

@end
