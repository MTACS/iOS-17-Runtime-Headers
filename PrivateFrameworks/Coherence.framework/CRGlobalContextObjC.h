
@interface CRGlobalContextObjC : NSObject

+ (id)newObjCReplicaFor:(id)arg1;
+ (id)objCRenames;
+ (void)releaseObjCSequence:(id)arg1;
+ (long long)renameGeneration;
+ (id)renameObjCSequence:(id)arg1 after:(long long)arg2 in:(id)arg3;
+ (void)retainObjCSequence:(id)arg1;
+ (void)retainOrReleaseWithInitial:(id)arg1 current:(id)arg2 forReplica:(id)arg3;
+ (void)retainOrReleaseWithInitial:(id)arg1 current:(id)arg2 forReplica:(id)arg3 copyingFrom:(id)arg4;

- (id)init;

@end
