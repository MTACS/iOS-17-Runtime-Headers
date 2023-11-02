
@interface DIIOObject : NSObject {
    unsigned int  _ioObj;
}

@property (nonatomic, readonly, copy) NSString *ioClassName;
@property (nonatomic, readonly) unsigned int ioObj;

+ (id)copyDiskImagesControllerWithError:(id*)arg1;

- (id)copyParentWithError:(id*)arg1;
- (id)copyPropertyWithClass:(Class)arg1 key:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithClassName:(id)arg1 error:(id*)arg2;
- (id)initWithDIIOObject:(id)arg1;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)initWithIOObject:(unsigned int)arg1 retain:(bool)arg2;
- (id)initWithIteratorNext:(id)arg1;
- (id)initWithRegistryEntryID:(unsigned long long)arg1 error:(id*)arg2;
- (id)ioClassName;
- (unsigned int)ioObj;
- (id)ioObjectWithClassName:(id)arg1 iterateParent:(bool)arg2 error:(id*)arg3;
- (id)newIteratorWithOptions:(unsigned int)arg1 error:(id*)arg2;
- (unsigned long long)registryEntryIDWithError:(id*)arg1;

@end
