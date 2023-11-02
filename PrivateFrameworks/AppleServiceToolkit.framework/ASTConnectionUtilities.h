
@interface ASTConnectionUtilities : NSObject

+ (id)MD5HeaderValueForTask:(id)arg1;
+ (unsigned long long)allowCellularSizeThreshold;
+ (bool)didEncounterNetworkDisconnectionError:(id)arg1;
+ (id)getServerLoggingSelection;
+ (bool)isGzipEnabled;
+ (bool)isValidResponse:(id)arg1;
+ (bool)relaxTimeouts;
+ (bool)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2;
+ (bool)useChunkedTransferEncoding;

@end
