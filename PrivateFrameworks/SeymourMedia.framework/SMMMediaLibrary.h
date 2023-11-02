
@interface SMMMediaLibrary : NSObject

+ (void)addGlobalPlaylistWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)addTrackWithIdentifier:(long long)arg1 completion:(id /* block */)arg2;
+ (id)identifierForItem:(id)arg1;
+ (id)predicateForTracksWithAdamIdentifiers:(id)arg1;

@end
