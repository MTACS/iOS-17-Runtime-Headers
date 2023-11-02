
@interface MPCloudControllerItemIDList : NSObject {
    ICCloudItemIDList * _cloudItemIDList;
}

@property (nonatomic, retain) ICCloudItemIDList *cloudItemIDList;

+ (id)cloudItemIDListForPlaylist:(id)arg1;

- (void).cxx_destruct;
- (id)ICCloudItemIDList;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (void)addPlaylistID:(id)arg1;
- (id)cloudItemIDList;
- (id)init;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setCloudItemIDList:(id)arg1;

@end
