
@protocol PNFetchResultProtocol <NSFastEnumeration>

@required

- (unsigned long long)count;
- (NSArray *)fetchedObjectIDs;
- (NSArray *)fetchedObjects;
- (PHPhotoLibrary *)photoLibrary;

@end
