
@interface NPKButtonListener : NSObject {
    id /* block */  _buttonHandler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
}

@property (nonatomic, copy) id /* block */ buttonHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;

- (void).cxx_destruct;
- (id /* block */)_handlerQueue_buttonHandler;
- (id /* block */)buttonHandler;
- (id)handlerQueue;
- (id)initWithHandlerQueue:(id)arg1;
- (void)setButtonHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;

@end
