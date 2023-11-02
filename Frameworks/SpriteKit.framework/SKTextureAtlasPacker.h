
@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage { }*)copyProcessedImageSource:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcNonAlphaArea:(struct CGImage { }*)arg1;
- (struct CGImage { }*)copyRotateCGImage:(struct CGImage { }*)arg1 direction:(bool)arg2;
- (id)generateMetaData;
- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id*)arg2 forcePOT:(bool)arg3;
- (id)getTextureFileList:(id)arg1 modDate:(id*)arg2;
- (bool)isFullyOpaque:(struct CGImage { }*)arg1;
- (id)partitionTextureFilesByResolution:(id)arg1;
- (id)processPackedTextureAtlas:(const void*)arg1 suffix:(id)arg2 packer:(struct shared_ptr<MaxRectTexturePacker> { struct MaxRectTexturePacker {} *x1; struct __shared_weak_count {} *x2; })arg3 sortedTrimArray:(const void*)arg4 sortedTextureArray:(const void*)arg5;

@end
