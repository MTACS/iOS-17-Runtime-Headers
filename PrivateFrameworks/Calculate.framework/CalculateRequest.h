
@interface CalculateRequest : NSObject {
    NSString * _expression;
    bool  _isCanceled;
    NSDictionary * _options;
    CalculateResult * _result;
    id /* block */  _resultHandler;
}

@property (nonatomic, retain) NSString *expression;
@property (nonatomic) bool isCanceled;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) CalculateResult *result;
@property (nonatomic, copy) id /* block */ resultHandler;

+ (void)_lock;
+ (void)_unlock;
+ (id)serialQueue;

- (void).cxx_destruct;
- (void)cancel;
- (id)expression;
- (void)finish;
- (bool)isCanceled;
- (id)options;
- (id)result;
- (id /* block */)resultHandler;
- (void)setExpression:(id)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)update;

@end
