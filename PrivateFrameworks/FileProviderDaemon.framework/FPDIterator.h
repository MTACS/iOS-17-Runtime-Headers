
@interface FPDIterator : NSObject {
    NSError * _error;
    bool  _shouldDecorateItems;
    bool  _skipMaterializedTreeTraversal;
}

@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long numFoldersPopped;
@property (nonatomic) bool shouldDecorateItems;
@property (nonatomic) bool skipMaterializedTreeTraversal;

+ (id)hybridIteratorForItem:(id)arg1 domain:(id)arg2 enforceFPItem:(bool)arg3;
+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 wantsDisk:(bool)arg2 provider:(id)arg3;

- (void).cxx_destruct;
- (bool)done;
- (id)error;
- (id)nextItem;
- (id)nextWithError:(id*)arg1;
- (unsigned long long)numFoldersPopped;
- (void)setShouldDecorateItems:(bool)arg1;
- (void)setSkipMaterializedTreeTraversal:(bool)arg1;
- (bool)shouldDecorateItems;
- (bool)skipMaterializedTreeTraversal;

@end
