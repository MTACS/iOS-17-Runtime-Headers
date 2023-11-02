
@interface BWDeferredDataIntermediate : BWDeferredIntermediate {
    NSData * _archive;
}

- (void)dealloc;
- (id)description;
- (id)fetchAndRetain:(int*)arg1;
- (id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2;
- (int)setArchive:(id)arg1;

@end
