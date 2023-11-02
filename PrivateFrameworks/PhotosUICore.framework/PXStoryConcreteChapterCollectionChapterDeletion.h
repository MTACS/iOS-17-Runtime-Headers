
@interface PXStoryConcreteChapterCollectionChapterDeletion : NSObject <PXStoryChapterCollectionChapterDeletion> {
    NSObject<NSCopying> * _deletedChapterIdentifier;
}

@property (nonatomic, readonly) NSObject<NSCopying> *deletedChapterIdentifier;
@property (nonatomic, readonly) long long kind;

- (void).cxx_destruct;
- (id)deletedChapterIdentifier;
- (id)init;
- (id)initWithDeletedChapterIdentifier:(id)arg1;
- (long long)kind;

@end
