
@protocol PEAsset <NSObject>

@required

- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (double)duration;
- (bool)isAdjusted;
- (bool)isLivePhoto;
- (bool)isResourceDownloadPossible;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (unsigned short)playbackVariation;
- (unsigned long long)requestContentEditingInputWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: PHContentEditingInputRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHContentEditingInput *, NSDictionary *, void*
- (NSString *)uniformTypeIdentifier;
- (NSString *)uuid;

@end
