
@protocol AFContextProvider

@required

- (bool)allowContextProvider:(id <AFContextProvider>)arg1;
- (NSArray *)getCurrentContext;

@end
