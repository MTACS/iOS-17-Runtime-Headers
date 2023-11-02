
@interface _SVXRemoteExpressionParsingService : NSObject <SVXExpressionParsingServing> {
    <SVXAceCommandHandling> * _aceHandler;
}

@property (nonatomic, retain) <SVXAceCommandHandling> *aceHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aceHandler;
- (id)initWithAceHandler:(id)arg1;
- (void)parseExpressions:(id)arg1 targetDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)setAceHandler:(id)arg1;

@end
