
@protocol AAUIAlertControllerProtocol <NSObject>

@required

+ (id)alertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3;
+ (id)alertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 actionHandler:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
+ (id)alertWithTitle:(NSString *)arg1 message:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 defaultButtonTitle:(NSString *)arg4;
+ (id)alertWithTitle:(void *)arg1 message:(void *)arg2 cancelButtonTitle:(void *)arg3 defaultButtonTitle:(void *)arg4 actionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
+ (id)alertWithTitle:(void *)arg1 message:(void *)arg2 cancelButtonTitle:(void *)arg3 destructiveButtonTitle:(void *)arg4 actionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
