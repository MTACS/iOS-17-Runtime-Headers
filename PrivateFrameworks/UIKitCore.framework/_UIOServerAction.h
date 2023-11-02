
@interface _UIOServerAction : BSAction {
    _UIOServerActionOriginContext * _originContext;
}

@property (nonatomic, readonly) _UIOServerActionOriginContext *originContext;

- (void).cxx_destruct;
- (id)initWithOriginContext:(id)arg1 info:(id)arg2 responder:(id)arg3;
- (bool)isPermitted;
- (id)originContext;
- (void)performActionFromConnection:(id)arg1;

@end
