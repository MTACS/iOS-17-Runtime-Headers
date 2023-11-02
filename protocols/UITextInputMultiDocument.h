
@protocol UITextInputMultiDocument <NSObject>

@optional

- (void)_clearToken:(id <NSCopying><NSSecureCoding>)arg1;
- (void)_preserveFocusWithToken:(id <NSCopying><NSSecureCoding>)arg1 destructively:(bool)arg2;
- (bool)_restoreFocusWithToken:(id <NSCopying><NSSecureCoding>)arg1;
- (void)_restoreFocusWithToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <NSCopying><NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
