
@interface _HKAppImageManagerContainer : NSObject {
    id /* block */  _completionHandler;
    NSMutableData * _data;
    NSString * _urlString;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, copy) NSString *urlString;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)data;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
