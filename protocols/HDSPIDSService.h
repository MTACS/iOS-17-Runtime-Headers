
@protocol HDSPIDSService <NSObject>

@required

- (<HDSPIDSServiceDelegate> *)delegate;
- (bool)isCloudService;
- (void)sendMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <HDSPIDSMessage> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <HDSPIDSServiceDelegate>)arg1;

@end
