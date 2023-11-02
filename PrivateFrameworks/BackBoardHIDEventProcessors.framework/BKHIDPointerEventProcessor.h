
@interface BKHIDPointerEventProcessor : NSObject <BKHIDEventProcessor> {
    NSMutableDictionary * _eventRecords;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchEvent:(struct __IOHIDEvent { }*)arg1 sender:(id)arg2 dispatcher:(id)arg3 destinations:(id)arg4;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;

@end
