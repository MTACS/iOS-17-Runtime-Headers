
@interface _SBDeviceApplicationSceneHandleSnapshottingAssertion : BSSimpleAssertion {
    unsigned int  _contextId;
    unsigned long long  _renderId;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (nonatomic, readonly) unsigned long long renderId;

- (unsigned int)contextId;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 contextId:(unsigned int)arg3 renderId:(unsigned long long)arg4 invalidationBlock:(id /* block */)arg5;
- (unsigned long long)renderId;

@end
