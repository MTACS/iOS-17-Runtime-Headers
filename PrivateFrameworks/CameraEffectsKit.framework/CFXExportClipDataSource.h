
@interface CFXExportClipDataSource : NSObject <JFXCompositionPlayableElementsDataSource> {
    CFXClip * _clip;
}

@property (nonatomic, retain) CFXClip *clip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clip;
- (id)colorSpace;
- (long long)count;
- (int)duration;
- (int)frameRate;
- (struct CGSize { double x1; double x2; })frameSize;
- (double)imageScale;
- (id)initWithClip:(id)arg1;
- (bool)isExporting;
- (id)playableElementAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })renderSize;
- (bool)screenCanShow2160P;
- (void)setClip:(id)arg1;
- (int)timeScale;
- (bool)use2160Pcontent:(bool)arg1;

@end
