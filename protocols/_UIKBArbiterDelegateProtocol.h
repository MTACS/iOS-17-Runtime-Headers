
@protocol _UIKBArbiterDelegateProtocol <NSObject>

@required

- (void)queue_getDebugInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)queue_keyboardChanged:(void *)arg1 onComplete:(void *)arg2; // needs 2 arg types, found 6: _UIKeyboardChangedInformation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_keyboardChangedWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_keyboardIAVChanged:(void *)arg1 onComplete:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_keyboardSuppressed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_keyboardTransition:(void *)arg1 event:(void *)arg2 withInfo:(void *)arg3 onComplete:(void *)arg4; // needs 4 arg types, found 8: NSString *, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_keyboardUIDidChange:(void *)arg1 onComplete:(void *)arg2; // needs 2 arg types, found 6: _UIKeyboardUIInformation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue_setLastEventSource:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
