
@interface _UIOMenuLeafPerformAction : _UIOClientAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage;

- (void)handleClientActionToOverlayService:(id)arg1;
- (id)identifier;
- (id)initWithMenuElement:(id)arg1 pasteAuthenticationMesage:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)pasteAuthenticationMessage;

@end
