
@interface UIStoryboardSegue : NSObject {
    UIViewController * _destinationViewController;
    NSString * _identifier;
    id /* block */  _performHandler;
    id /* block */  _prepareHandler;
    id  _sender;
    UIViewController * _sourceViewController;
}

@property (nonatomic, readonly) UIViewController *destinationViewController;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ performHandler;
@property (nonatomic, copy) id /* block */ prepareHandler;
@property (nonatomic, retain) id sender;
@property (nonatomic, readonly) UIViewController *sourceViewController;

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_prepare;
- (id)destinationViewController;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)perform;
- (id /* block */)performHandler;
- (id /* block */)prepareHandler;
- (id)sender;
- (void)setPerformHandler:(id /* block */)arg1;
- (void)setPrepareHandler:(id /* block */)arg1;
- (void)setSender:(id)arg1;
- (id)sourceViewController;

@end
