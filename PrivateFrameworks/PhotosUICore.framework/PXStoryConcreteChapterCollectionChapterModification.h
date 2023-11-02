
@interface PXStoryConcreteChapterCollectionChapterModification : NSObject <PXStoryChapterCollectionChapterModification> {
    id /* block */  _chapterChangeRequest;
    NSObject<NSCopying> * _editedChapterIdentifier;
}

@property (nonatomic, readonly) id /* block */ chapterChangeRequest;
@property (nonatomic, readonly) NSObject<NSCopying> *editedChapterIdentifier;
@property (nonatomic, readonly) long long kind;

- (void).cxx_destruct;
- (id /* block */)chapterChangeRequest;
- (id)editedChapterIdentifier;
- (id)init;
- (id)initWithEditedChapterIdentifier:(id)arg1 chapterChangeRequest:(id /* block */)arg2;
- (long long)kind;

@end
