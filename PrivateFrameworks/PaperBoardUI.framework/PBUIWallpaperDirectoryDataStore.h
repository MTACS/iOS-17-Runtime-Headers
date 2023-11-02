
@interface PBUIWallpaperDirectoryDataStore : NSObject <BSDescriptionProviding, PBUIWallpaperDataStore> {
    NSURL * _directoryURL;
    bool  _supportsWallpaperOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *directoryCreationAttributes;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsWallpaperOptions;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

+ (id)defaultDirectoryURL;

- (void).cxx_destruct;
- (bool)copyVideoAtURL:(id)arg1 toURL:(id)arg2;
- (void)createDirectory;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didWriteFileToURL:(id)arg1;
- (id)directoryCreationAttributes;
- (id)directoryURL;
- (bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (void)setSupportsWallpaperOptions:(bool)arg1;
- (bool)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsWallpaperImageHashDataStorage;
- (bool)supportsWallpaperOptions;
- (id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperColorForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperGradientForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOptionsURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit

- (id)wk_wallpaperImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wk_wallpaperOriginalImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wk_wallpaperThumbnailURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

@end
