
@protocol NTTodayProtoitem <NFCopying>

@required

- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1;
- (NSString *)identifier;
- (<NTTodayItem> *)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 todayData:(id <FCTodayPrivateData>)arg4 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;

@end
