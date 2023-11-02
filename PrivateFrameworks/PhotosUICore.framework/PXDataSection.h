
@interface PXDataSection : NSObject <NSFastEnumeration, PXFastEnumeration> {
    id  _content;
    long long  _identifier;
    <NSObject><NSCopying> * _outlineObject;
}

@property (nonatomic, readonly) bool containsAnyObjects;
@property (nonatomic, readonly) id content;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) <NSObject><NSCopying> *outlineObject;
@property (readonly) Class superclass;

+ (id)dataSectionForAssetsInAssetContainers:(id)arg1;

- (void).cxx_destruct;
- (bool)containsAnyObjects;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)description;
- (id)firstObject;
- (long long)identifier;
- (id)init;
- (id)initWithOutlineObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)outlineObject;

@end
