
@protocol TSPEncoderWriteCoordinatorDelegate <NSObject>

@required

- (long long)componentWriterMode;
- (TSPObject *)createMetadataForRootObject:(TSPObject *)arg1 readVersion:(unsigned long long)arg2 dataArchiver:(id <TSPDataArchiver>)arg3 archivedObjects:(NSMapTable *)arg4 componentObjectUUIDMap:(TSPComponentObjectUUIDMap *)arg5 externalReferences:(TSPReferenceOrderedSet *)arg6 weakExternalReferences:(TSPReferenceOrderedSet *)arg7 lazyReferences:(NSHashTable *)arg8 dataReferences:(NSHashTable *)arg9 error:(id*)arg10;
- (unsigned long long)objectTargetType;
- (bool)skipMetadataObjectSerialization;

@end
