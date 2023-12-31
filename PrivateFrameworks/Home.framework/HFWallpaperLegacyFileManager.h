
@interface HFWallpaperLegacyFileManager : NSObject {
    NSURL * _wallpaperFolderURL;
}

@property (nonatomic, retain) NSURL *wallpaperFolderURL;

- (void).cxx_destruct;
- (id)clearAllWallpapers;
- (id)filenameForType:(long long)arg1 variant:(long long)arg2;
- (id)init;
- (void)migrateCache:(id /* block */)arg1;
- (void)setWallpaperFolderURL:(id)arg1;
- (id)wallpaperFolderURL;

@end
