
@interface SFUIImageRequest : NSObject {
    NSString * _identifier;
    int  _requestID;
    id /* block */  _resultHandler;
    bool  _synchronous;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) bool synchronous;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithRequestID:(int)arg1 identifier:(id)arg2 synchronous:(bool)arg3 resultHandler:(id /* block */)arg4;
- (int)requestID;
- (id /* block */)resultHandler;
- (bool)synchronous;

@end
