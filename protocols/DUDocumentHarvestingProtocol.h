
@protocol DUDocumentHarvestingProtocol

@required

- (void)addOrUpdateSearchableItems:(void *)arg1 bundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSerializedDocument:(void *)arg1 documentType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)foundInEventResultWithSerializedDocument:(void *)arg1 documentType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DUFoundInEventClientAbstractResult *, NSError *, void*

@end
