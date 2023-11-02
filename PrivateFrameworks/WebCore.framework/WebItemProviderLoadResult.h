
@interface WebItemProviderLoadResult : NSObject {
    struct RetainPtr<NSMutableDictionary<NSString *,NSURL *>> { 
        void *m_ptr; 
    }  _fileURLs;
    struct RetainPtr<NSItemProvider> { 
        void *m_ptr; 
    }  _itemProvider;
    struct RetainPtr<NSArray<NSString *>> { 
        void *m_ptr; 
    }  _typesToLoad;
}

@property (nonatomic, readonly) bool canBeRepresentedAsFileUpload;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSArray *loadedFileURLs;
@property (nonatomic, readonly) NSArray *loadedTypeIdentifiers;
@property (nonatomic, readonly) NSArray *typesToLoad;

+ (id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canBeRepresentedAsFileUpload;
- (id)description;
- (id)fileURLForType:(id)arg1;
- (id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2;
- (id)itemProvider;
- (id)loadedFileURLs;
- (id)loadedTypeIdentifiers;
- (void)setFileURL:(id)arg1 forType:(id)arg2;
- (id)typesToLoad;

@end
