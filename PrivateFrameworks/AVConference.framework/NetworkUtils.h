
@interface NetworkUtils : NSObject

+ (int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3;
+ (bool)createAndStartListener:(id*)arg1 withParameters:(id)arg2;
+ (bool)createNWPathEvaluator:(id*)arg1 withIPAddress:(id)arg2 localPort:(int*)arg3 remotePort:(int)arg4 shouldRunInProcess:(bool)arg5 useBackingSocket:(bool)arg6;
+ (id)encryptionInfoForKey:(unsigned long long)arg1;
+ (id)newEncryptionInfoWithMediaKeyIndex:(id)arg1;
+ (id)newNWConnectionWithIPAddress:(id)arg1 srcPort:(short)arg2;
+ (id)newRTPSocketDictionary:(bool)arg1 rtpSourcePort:(short)arg2;
+ (int)nonConnectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3;
+ (id)securityKeyMaterialWithMediaKeyIndex:(id)arg1;
+ (void)setUniquePIDOnParameters:(id)arg1 shouldRunInProcess:(bool)arg2;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(bool)arg3 error:(id*)arg4;

@end
