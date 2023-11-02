
@protocol MCMClientCodeSignInfoCache <NSObject>

@required

- (<MCMClientCodeSignInfo> *)codeSignInfoForCDHash:(void *)arg1 identifier:(void *)arg2 error:(void *)arg3 generator:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <MCMClientCodeSignInfo> *, id /* block */, id*, void*
- (void)flush;

@end
