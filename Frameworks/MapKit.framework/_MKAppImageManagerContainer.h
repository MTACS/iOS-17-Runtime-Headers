
@interface _MKAppImageManagerContainer : NSObject {
    id /* block */  _completionHandler;
    NSMutableData * _data;
    unsigned long long  _signpostID;
    NSString * _urlString;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic, copy) NSString *urlString;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)data;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setUrlString:(id)arg1;
- (unsigned long long)signpostID;
- (id)urlString;

@end
