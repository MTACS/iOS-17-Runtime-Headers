
@protocol HMSoftwareUpdateDocumentationAssetExtractor <NSObject>

@required

- (<HMSoftwareUpdateDocumentationAssetExtractorDelegate> *)extractorDelegate;
- (void)finishStreamWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id)initWithPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)prepareForExtractionToPath:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)setExtractorDelegate:(id <HMSoftwareUpdateDocumentationAssetExtractorDelegate>)arg1;
- (void)supplyBytes:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*

@end
