
@interface ICTTTextStorageWithRange : NSObject <NSItemProviderWriting> {
    ICNote * _note;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    ICTTTextStorage * _textStorage;
    NSManagedObjectContext * _workerContext;
    ICNote * _workerContextNote;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICTTTextStorage *textStorage;
@property (nonatomic, retain) NSManagedObjectContext *workerContext;
@property (nonatomic, retain) ICNote *workerContextNote;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 note:(id)arg3;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)note;
- (void)prepareTextStorage;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setNote:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextStorage:(id)arg1;
- (void)setWorkerContext:(id)arg1;
- (void)setWorkerContextNote:(id)arg1;
- (id)textStorage;
- (id)workerContext;
- (id)workerContextNote;
- (id)writableTypeIdentifiersForItemProvider;

@end
