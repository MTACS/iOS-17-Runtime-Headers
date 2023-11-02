
@interface PXStoryConcreteChapterCollectionChapterInsertion : NSObject <PXStoryChapterCollectionChapterInsertion> {
    id /* block */  _chapterConfiguration;
    <PXDisplayAsset> * _firstAsset;
}

@property (nonatomic, readonly) id /* block */ chapterConfiguration;
@property (nonatomic, readonly) <PXDisplayAsset> *firstAsset;
@property (nonatomic, readonly) long long kind;

- (void).cxx_destruct;
- (id /* block */)chapterConfiguration;
- (id)firstAsset;
- (id)init;
- (id)initWithFirstAsset:(id)arg1 chapterConfiguration:(id /* block */)arg2;
- (long long)kind;

@end
