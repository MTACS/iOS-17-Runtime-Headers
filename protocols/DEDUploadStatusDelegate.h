
@protocol DEDUploadStatusDelegate <NSObject>

@required

- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(DEDBugSession *)arg3;

@optional

- (void)compressionProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(DEDBugSession *)arg3;

@end
