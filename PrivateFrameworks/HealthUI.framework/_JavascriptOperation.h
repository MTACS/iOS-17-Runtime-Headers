
@interface _JavascriptOperation : NSObject {
    id /* block */  _completion;
    NSString * _javascript;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *javascript;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithJavascript:(id)arg1 completion:(id /* block */)arg2;
- (id)javascript;
- (void)setCompletion:(id /* block */)arg1;
- (void)setJavascript:(id)arg1;
- (void)submitJavascript:(id)arg1 finishBlock:(id /* block */)arg2;

@end
