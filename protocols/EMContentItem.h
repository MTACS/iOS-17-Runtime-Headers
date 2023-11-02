
@protocol EMContentItem <EFPubliclyDescribable>

@required

- (NSArray *)availableRepresentations;
- (NSString *)contentID;
- (long long)dataTransferByteCount;
- (NSString *)displayName;
- (int)exchangeEventUID;
- (bool)isAvailableLocally;
- (EMMailDropMetadata *)mailDropMetadata;
- (NSProgress *)requestRepresentationWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: EMContentRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMContentRepresentation *, NSError *, void*
- (NSProgress *)requestRepresentationWithOptions:(void *)arg1 delegate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: EMContentRequestOptions *, <EMContentItemRequestDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMContentRepresentation *, NSError *, void*
- (long long)storageByteCount;
- (UTType *)type;
- (NSString *)uniformTypeIdentifier;

@end
