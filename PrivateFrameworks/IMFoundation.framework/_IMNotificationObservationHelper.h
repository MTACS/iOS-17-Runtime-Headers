
@interface _IMNotificationObservationHelper : NSObject {
    id /* block */  _block;
    NSString * _name;
    id  _object;
    id  _observer;
}

- (void).cxx_destruct;
- (void)_notification:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 name:(id)arg2 object:(id)arg3 block:(id /* block */)arg4;

@end
