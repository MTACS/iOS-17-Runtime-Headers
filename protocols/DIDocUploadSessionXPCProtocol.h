
@protocol DIDocUploadSessionXPCProtocol <NSObject>

@required

- (void)cancelUploads;
- (void)uploadDocData:(void *)arg1 uploadSettings:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, DIDocUploadSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
