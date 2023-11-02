
@protocol HFApplicationData <NSObject>

@required

- (void)hf_updateApplicationData:(void *)arg1 handleError:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: HMApplicationData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)hf_updateApplicationData:(void *)arg1 needCellReload:(void *)arg2 handleError:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: HMApplicationData *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
