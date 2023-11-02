
@interface _UIOMenuPreparationAction : _UIOClientAction

@property (nonatomic, readonly) NSString *identifier;

- (void)handleClientActionToOverlayService:(id)arg1;
- (id)identifier;
- (id)initWithMenu:(id)arg1 responseHandler:(id /* block */)arg2;

@end
