
@interface FlexSongAssetProvider_V2 : NSObject <FlexSongAssetProviderProtocol> {
    NSString * _audioFileExtension;
    NSString * _rootFolderPath;
}

@property (nonatomic, retain) NSString *audioFileExtension;
@property (nonatomic, retain) NSString *rootFolderPath;

- (void).cxx_destruct;
- (id)_folderNameForSegmentType:(unsigned long long)arg1;
- (bool)assetsAreLocal;
- (id)audioFileExtension;
- (id)initWithFolderPath:(id)arg1 audioFileExtension:(id)arg2;
- (id)rootFolderPath;
- (void)setAudioFileExtension:(id)arg1;
- (void)setRootFolderPath:(id)arg1;
- (id)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (id)urlToAudioForSegment:(id)arg1;
- (id)urlToRoot;

@end
