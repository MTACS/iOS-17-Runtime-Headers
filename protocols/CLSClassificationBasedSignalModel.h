
@protocol CLSClassificationBasedSignalModel <CLSSignalModel>

@required

- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (NSArray *)modelInfo;
- (CLSSignalNode *)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(NSDictionary *)arg1 intoProcessedSignals:(CLSAssetProcessedSignals *)arg2;

@end
