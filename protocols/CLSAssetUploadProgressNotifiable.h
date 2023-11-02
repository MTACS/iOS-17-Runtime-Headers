
@protocol CLSAssetUploadProgressNotifiable <CLSClientCancelable>

@required

- (oneway void)clientRemote_uploadCompleted:(bool)arg1 url:(id)arg2 thumbnailURL:(id)arg3 relativePathWithinContainer:(NSString *)arg4 ubiquitousContainerName:(NSString *)arg5 brItemID:(NSString *)arg6 brOwnerName:(NSString *)arg7 brZoneName:(NSString *)arg8 brShareName:(NSString *)arg9 fractionUploaded:(double)arg10 isTemporary:(bool)arg11 isStaged:(bool)arg12 error:(NSError *)arg13;
- (oneway void)clientRemote_uploadProgressFraction:(double)arg1 error:(NSError *)arg2;

@end
