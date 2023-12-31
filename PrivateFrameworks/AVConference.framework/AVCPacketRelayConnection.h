
@interface AVCPacketRelayConnection : NSObject

+ (id)connectionWithIDSDestination:(id)arg1;
+ (id)connectionWithIDSSocketDescriptor:(unsigned short)arg1;
+ (id)connectionWithSocket:(unsigned short)arg1;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;

@end
