
@protocol LANotificationObserverXPC <NSObject>

@required

- (void)newValue:(void *)arg1 oldValue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: id, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
