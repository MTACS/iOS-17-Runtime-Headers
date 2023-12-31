
@protocol QLItemTransformerProtocol <NSObject>

@required

+ (NSSet *)allowedOutputClasses;

@optional

- (id)transformedContentsFromData:(NSData *)arg1 context:(QLPreviewContext *)arg2 error:(id*)arg3;
- (id)transformedContentsFromSpotlightSearchableItemInfo:(QLSpotlightSearchableItemInfo *)arg1 context:(QLPreviewContext *)arg2 error:(id*)arg3;
- (id)transformedContentsFromURL:(NSURL *)arg1 context:(QLPreviewContext *)arg2 error:(id*)arg3;

@end
