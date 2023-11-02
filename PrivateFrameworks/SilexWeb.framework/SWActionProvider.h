
@interface SWActionProvider : NSObject <SWActionProvider, SWMessageHandler> {
    NSMutableArray * _actionBlocks;
    <SWActionFactory> * _actionFactory;
    <SWLogger> * _logger;
}

@property (nonatomic, readonly) <SWEmbedAction> *action;
@property (nonatomic, readonly) NSMutableArray *actionBlocks;
@property (nonatomic, readonly) <SWActionFactory> *actionFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionBlocks;
- (id)actionFactory;
- (id)actionTypeText:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 actionFactory:(id)arg2 logger:(id)arg3;
- (id)logger;
- (void)onAction:(id /* block */)arg1;

@end
