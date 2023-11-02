
@protocol AAFlowPresenterProtocol <NSObject>

@required

- (void)launchProcessWithUserInfo:(NSDictionary *)arg1;
- (id /* block */)presentationCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (void)setPresentationCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
