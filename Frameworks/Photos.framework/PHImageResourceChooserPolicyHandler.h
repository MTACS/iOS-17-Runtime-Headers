
@interface PHImageResourceChooserPolicyHandler : NSObject

+ (bool)_passesSquareTableThumbnailTestWithKey:(id)arg1 pixelSize:(struct CGSize { double x1; double x2; })arg2 storeClassID:(unsigned short)arg3 loadingOptions:(unsigned long long)arg4;
+ (unsigned long long)qualifyResourceInfo:(id)arg1 againstPolicy:(long long)arg2 requestInfo:(id)arg3 reversed:(bool)arg4 tooLargeForPolicy:(bool*)arg5 disqualificationReason:(id*)arg6;

@end
