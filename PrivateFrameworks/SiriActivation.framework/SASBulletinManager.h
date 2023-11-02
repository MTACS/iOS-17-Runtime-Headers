
@interface SASBulletinManager : NSObject <BBObserverDelegate> {
    SASBulletinCache * _bulletinCache;
    NSMutableDictionary * _bulletinsOnLockScreen;
    <SASBulletinManagerDelegate> * _delegate;
    BBObserver * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SASBulletinManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bulletinsDidChange;
- (id)_displayNameForBulletin:(id)arg1;
- (void)_setupObserver;
- (void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (id)allBulletins;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinsOnLockScreen;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)modifyBulletinCompletionWithBulletin:(id)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)setDelegate:(id)arg1;

@end
