
@interface CKDirectoryPurger : NSObject {
    id /* block */  _shouldRemoveFileBlock;
    id /* block */  _shouldSkipFileBlock;
    NSArray * _urls;
}

@property (nonatomic, copy) id /* block */ shouldRemoveFileBlock;
@property (nonatomic, copy) id /* block */ shouldSkipFileBlock;
@property (nonatomic, readonly, copy) NSArray *urls;

+ (void)purgeDirectoryAtURL:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDirectoryURLs:(id)arg1;
- (void)purge;
- (void)setShouldRemoveFileBlock:(id /* block */)arg1;
- (void)setShouldSkipFileBlock:(id /* block */)arg1;
- (id /* block */)shouldRemoveFileBlock;
- (id /* block */)shouldSkipFileBlock;
- (id)urls;

@end
