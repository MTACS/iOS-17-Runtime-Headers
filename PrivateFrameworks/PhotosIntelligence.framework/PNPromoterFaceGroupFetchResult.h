
@interface PNPromoterFaceGroupFetchResult : NSObject <PNFetchResultProtocol> {
    NSArray * _faceGroups;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly) NSArray *fetchedObjectIDs;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)fetchedObjectIDs;
- (id)fetchedObjects;
- (id)initWithFaceGroups:(id)arg1;
- (id)photoLibrary;

@end
