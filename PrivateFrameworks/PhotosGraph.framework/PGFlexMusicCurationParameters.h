
@interface PGFlexMusicCurationParameters : NSObject {
    void entityUUID;
    void features;
    void flexMusicSongs;
    void memoryKeywords;
    void mood;
    void recentlyUsedSongs;
    void useMoodKeywords;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMood:(unsigned long long)arg1 memoryKeywords:(id)arg2 recentlyUsedSongs:(id)arg3 entityUUID:(id)arg4 useMoodKeywords:(bool)arg5 features:(id)arg6 musicCuratorContext:(id)arg7;

@end
