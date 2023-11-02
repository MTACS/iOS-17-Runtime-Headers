
@interface SKIOObject : NSObject {
    unsigned int  _ioObj;
}

@property (nonatomic, readonly, copy) NSString *ioClassName;
@property (nonatomic, readonly) unsigned int ioObj;

- (id)copyParent;
- (id)copyParentPropertyWithClass:(Class)arg1 key:(id)arg2;
- (id)copyProperties;
- (id)copyPropertyWithClass:(Class)arg1 key:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithClassName:(id)arg1;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)initWithIOObject:(unsigned int)arg1 retain:(bool)arg2;
- (id)initWithIteratorNext:(id)arg1;
- (id)initWithSKIOObject:(id)arg1;
- (id)ioClassName;
- (unsigned int)ioObj;
- (id)ioObjectWithClassName:(id)arg1 iterateParents:(bool)arg2;
- (id)newIteratorWithOptions:(unsigned int)arg1;
- (void)waitIOKitQuiet;

@end
