
@interface NSFilePromiseWriteToken : NSObject {
    NSURL * logicalURL;
    NSURL * promiseURL;
}

@property (copy) NSURL *logicalURL;
@property (copy) NSURL *promiseURL;

- (void)dealloc;
- (id)logicalURL;
- (id)promiseURL;
- (void)setLogicalURL:(id)arg1;
- (void)setPromiseURL:(id)arg1;

@end
