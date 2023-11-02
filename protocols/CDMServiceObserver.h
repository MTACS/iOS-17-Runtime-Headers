
@protocol CDMServiceObserver <NSObject>

@optional

- (void)smService:(id <CDMService>)arg1 didPublishCommand:(id <CDMCommand>)arg2;
- (void)smService:(void *)arg1 didPublishRequest:(void *)arg2 withResponseCallback:(void *)arg3; // needs 3 arg types, found 9: <CDMService> *, <CDMCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CDMCommand> *, NSError *, void*

@end
