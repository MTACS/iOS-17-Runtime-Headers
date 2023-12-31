
@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest> {
    id /* block */  _completion;
    IKJSDataSource * _dataSource;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    int  _state;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) JSValue *dataSource;
@property (nonatomic, readonly) bool isClosed;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (void)cancel;
- (void)close:(bool)arg1;
- (id /* block */)completion;
- (id)dataSource;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isClosed;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCompletion:(id /* block */)arg1;

@end
