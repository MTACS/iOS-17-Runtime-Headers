
@protocol CXAbstractProviderHostProtocol <NSObject>

@required

- (oneway void)actionCompleted:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CXAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)requestTransaction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
