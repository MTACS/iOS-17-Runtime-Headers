
@protocol IKJSViewModelLinkDelegate <NSObject>

@required

- (void)didCloseViewModelLink:(IKJSViewModelLink *)arg1 withErrorDictionary:(NSDictionary *)arg2;

@optional

- (void)documentDidChangeForViewModelLink:(IKJSViewModelLink *)arg1;
- (void)responseDictionaryDidChangeForViewModelLink:(IKJSViewModelLink *)arg1;

@end
