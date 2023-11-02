
@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {
    _UIViewServiceFencingControlProxy * _fencingControlProxy;
    int  _remotePID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;

- (void)_objc_initiateDealloc;
- (void)dealloc;

@end
