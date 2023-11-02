
@interface DCDocument : NSObject {
    id  _annotation;
    NSURL * _fileURL;
}

@property (nonatomic, readonly, copy) id annotation;
@property (nonatomic, readonly, copy) NSURL *fileURL;

+ (id)documentWithURL:(id)arg1;
+ (id)documentWithURL:(id)arg1 annotation:(id)arg2;

- (void).cxx_destruct;
- (id)annotation;
- (id)fileURL;
- (id)initWithURL:(id)arg1 annotation:(id)arg2;
- (void)openInDefaultAppWithCompletionHandler:(id /* block */)arg1;
- (void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
