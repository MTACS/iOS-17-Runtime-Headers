
@interface CDMServiceCenterUtils : NSObject

+ (unsigned int)getServiceCenterQueueQOS;
+ (bool)isHostedInDaemon;
+ (bool)isServiceCenterEnabled:(id)arg1;
+ (bool)needEmbeddingConfigsFor:(id)arg1;
+ (id)tryInitDAGServices:(id)arg1;

@end
