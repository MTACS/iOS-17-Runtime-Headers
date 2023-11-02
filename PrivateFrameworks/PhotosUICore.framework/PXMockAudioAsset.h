
@interface PXMockAudioAsset : NSObject <PXAudioAsset, PXMutableMockAudioAsset, PXStorySongResource> {
    NSString * _albumTitle;
    NSString * _artistName;
    NSString * _artworkURLFormat;
    Class  _audioSessionClass;
    NSString * _colorGradeCategory;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSArray * _entryPoints;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _exportableDuration;
    unsigned long long  _flags;
    NSString * _identifier;
    long long  _pace;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *albumTitle;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, readonly) <PXDisplayAsset> *artworkDisplayAsset;
@property (nonatomic, copy) NSString *artworkURLFormat;
@property (nonatomic, readonly, copy) NSString *assetTagsDescription;
@property (nonatomic, retain) Class audioSessionClass;
@property (nonatomic, readonly) long long catalog;
@property (nonatomic, copy) NSString *colorGradeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, copy) NSArray *entryPoints;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } exportableDuration;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long pace;
@property (nonatomic, readonly) <PXAudioAsset> *previewAudioAsset;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) <PXAudioAsset> *px_storyResourceSongAsset;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)albumTitle;
- (id)artistName;
- (id)artworkDisplayAsset;
- (id)artworkURLForTargetPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkURLFormat;
- (id)assetTagsDescription;
- (Class)audioSessionClass;
- (long long)catalog;
- (id)colorGradeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)defaultMediaProviderClass;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)entryPoints;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exportableDuration;
- (unsigned long long)flags;
- (id)identifier;
- (id)init;
- (id)initWithConfiguration:(id /* block */)arg1;
- (bool)isAudioEqualToAsset:(id)arg1;
- (long long)pace;
- (id)previewAudioAsset;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;
- (id)px_storyResourceSongAsset;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setArtworkURLFormat:(id)arg1;
- (void)setAudioSessionClass:(Class)arg1;
- (void)setColorGradeCategory:(id)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setExportableDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPace:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
