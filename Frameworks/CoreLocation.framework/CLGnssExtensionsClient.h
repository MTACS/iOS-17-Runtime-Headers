
@interface CLGnssExtensionsClient : NSObject {
    struct CLGnssExtensionsCallbackAssertionInternal { id x1; id /* block */ x2; struct CLConnectionClient {} *x3; } * fInternal;
}

+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2 withCallbackQueue:(id)arg3 andBlock:(id /* block */)arg4;
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2 withCallbackQueue:(id)arg3 andBlock:(id /* block */)arg4;

- (void)dealloc;
- (id)initWithRegistrationMessageName:(const char *)arg1 messageDictionary:(id)arg2 dispatchQueue:(id)arg3 codeBlock:(id /* block */)arg4;
- (void)invalidate;

@end
