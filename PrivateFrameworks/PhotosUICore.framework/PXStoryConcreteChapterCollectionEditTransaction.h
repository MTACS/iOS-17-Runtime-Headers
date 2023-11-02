
@interface PXStoryConcreteChapterCollectionEditTransaction : NSObject <PXStoryChapterCollectionEditTransaction> {
    NSArray * _edits;
    <PXStoryChapterCollection> * _originalChapterCollection;
}

@property (nonatomic, readonly) NSArray *edits;
@property (nonatomic, readonly) <PXStoryChapterCollection> *originalChapterCollection;

- (void).cxx_destruct;
- (id)edits;
- (id)init;
- (id)initWithOriginalChapterCollection:(id)arg1 edits:(id)arg2;
- (id)originalChapterCollection;

@end
