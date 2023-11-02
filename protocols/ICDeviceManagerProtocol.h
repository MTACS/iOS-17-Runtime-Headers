
@protocol ICDeviceManagerProtocol <NSObject>

@required

- (long long)closeDevice:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (long long)closeSession:(void *)arg1 withOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)deleteFile:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraFile *, ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)downloadFile:(void *)arg1 fromDevice:(void *)arg2 withOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraFile *, ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)ejectDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)enumerateContent:(void *)arg1 withOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)getFileData:(void *)arg1 fromDevice:(void *)arg2 withOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraFile *, ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)getFileMetadata:(void *)arg1 fromDevice:(void *)arg2 withOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraFile *, ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)getFileThumbnail:(void *)arg1 fromDevice:(void *)arg2 withOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraFile *, ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)getSecurityScopedURL:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraFile *, ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)openDevice:(NSDictionary *)arg1 contextInfo:(void*)arg2;
- (long long)openSession:(void *)arg1 withOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)refreshObjectHandleInfo:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ICCameraFile *, ICCameraDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)registerDevice:(ICCameraDevice *)arg1 forImageCaptureEventNotifications:(NSArray *)arg2;
- (long long)sendDevice:(void *)arg1 ptpCommand:(void *)arg2 andPayload:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICCameraDevice *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)syncClock:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ICDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSMutableDictionary *, void*
- (long long)unregisterDevice:(ICCameraDevice *)arg1 forImageCaptureEventNotifications:(NSArray *)arg2;

@end
