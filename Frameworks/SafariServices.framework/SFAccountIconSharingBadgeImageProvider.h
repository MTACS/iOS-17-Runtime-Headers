
@interface SFAccountIconSharingBadgeImageProvider : NSObject {
    NSMutableDictionary * _badgeDiameterToImageCache;
    NSHashTable * _subscribers;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_createBadgeImageWithDiameter:(unsigned long long)arg1;
- (void)_resetAndInformSubscribers;
- (void)addCoordinatorAsSubscriber:(id)arg1;
- (id)badgeImageForDiameter:(unsigned long long)arg1;
- (id)init;

@end
