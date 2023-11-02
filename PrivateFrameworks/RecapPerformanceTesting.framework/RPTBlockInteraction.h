
@interface RPTBlockInteraction : NSObject <RPTInteraction> {
    id /* block */  _actionsComposer;
}

@property (nonatomic, copy) id /* block */ actionsComposer;

- (void).cxx_destruct;
- (id /* block */)actionsComposer;
- (id)initWithActions:(id /* block */)arg1;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (void)setActionsComposer:(id /* block */)arg1;

@end
