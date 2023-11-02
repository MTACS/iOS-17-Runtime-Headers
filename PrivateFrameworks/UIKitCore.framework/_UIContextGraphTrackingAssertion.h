
@interface _UIContextGraphTrackingAssertion : BSSimpleAssertion {
    id /* block */  _clientHandlerBlock;
    unsigned int  _contextID;
    NSArray * _contextIDGraph;
}

@property (nonatomic, readonly) unsigned int contextID;

- (void).cxx_destruct;
- (void)_setWindowGraph:(id)arg1 callHandler:(bool)arg2;
- (unsigned int)contextID;
- (id)initWithContextID:(unsigned int)arg1 windowGraph:(id)arg2 clientHandlerBlock:(id /* block */)arg3 invalidationBlock:(id /* block */)arg4;
- (bool)isContextIDRelevant:(unsigned int)arg1;
- (void)setWindowGraph:(id)arg1;

@end
