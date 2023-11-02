
@interface SWInteractionProvider : NSObject <SWInteractionProvider, SWMessageHandler> {
    NSMutableArray * _blocks;
    <SWInteraction> * _interaction;
    id /* block */  _interactionBlock;
    <SWInteractionFactory> * _interactionFactory;
    <SWLogger> * _logger;
}

@property (nonatomic, readonly) NSMutableArray *blocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWInteraction> *interaction;
@property (nonatomic, copy) id /* block */ interactionBlock;
@property (nonatomic, readonly) <SWInteractionFactory> *interactionFactory;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blocks;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4;
- (id)interaction;
- (id /* block */)interactionBlock;
- (id)interactionFactory;
- (id)logger;
- (void)onChange:(id /* block */)arg1;
- (void)setInteractionBlock:(id /* block */)arg1;

@end
