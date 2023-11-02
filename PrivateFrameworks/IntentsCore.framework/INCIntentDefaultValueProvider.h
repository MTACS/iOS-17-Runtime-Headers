
@interface INCIntentDefaultValueProvider : NSObject {
    INIntent * _intent;
}

@property (nonatomic, readonly, copy) INIntent *intent;

- (void).cxx_destruct;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (bool)isExpectedDefaultValueError:(id)arg1;
- (void)loadDefaultValuesWithAttributes:(id)arg1 extensionProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)arg1;

@end
