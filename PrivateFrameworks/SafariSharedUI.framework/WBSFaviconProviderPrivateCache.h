
@interface WBSFaviconProviderPrivateCache : NSObject {
    NSMutableDictionary * _iconURLStringToIconInfoDict;
    NSMutableDictionary * _pageURLStringToIconInfoDict;
    NSMutableDictionary * _urlStringToRejectedResourceIconInfoDict;
    NSCache * _uuidToImageDataCache;
}

- (void).cxx_destruct;
- (id)firstImageDataMatchingPageURLStringIn:(id)arg1 matchedPageURLString:(id*)arg2;
- (id)imageDataForIconURLString:(id)arg1;
- (id)imageDataForPageURLString:(id)arg1;
- (id)imageInfoForIconURLString:(id)arg1;
- (id)imageInfoForPageURLString:(id)arg1;
- (id)init;
- (bool)linkPageURLString:(id)arg1 toIconURLString:(id)arg2;
- (id)pageURLStringsWithPrefixesIn:(id)arg1;
- (id)rejectedResourceInfosForPageURLString:(id)arg1 iconURLString:(id)arg2;
- (void)removeAllImageDataWithCompletionHandler:(id /* block */)arg1;
- (void)removeImageDataForPageURLString:(id)arg1;
- (void)setImageData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 hasGeneratedResolutions:(bool)arg5;
- (void)setIsRejectedResource:(bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3;

@end
