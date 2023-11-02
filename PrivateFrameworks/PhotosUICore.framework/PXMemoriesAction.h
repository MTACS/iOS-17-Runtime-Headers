
@interface PXMemoriesAction : PXPhotosAction {
    <PXFastEnumeration> * _collections;
}

- (void).cxx_destruct;
- (id)collections;
- (id)initWithMemories:(id)arg1;
- (void)performMemoryChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

@end
