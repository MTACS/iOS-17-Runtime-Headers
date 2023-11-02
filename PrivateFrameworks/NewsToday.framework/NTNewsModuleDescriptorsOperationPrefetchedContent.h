
@interface NTNewsModuleDescriptorsOperationPrefetchedContent : NSObject <NFCopying> {
    <FCNewsAppConfiguration> * _appConfiguration;
    NSDictionary * _prefetchedHeldRecordsByType;
    <FCTodayPrivateData> * _privateData;
    NSDictionary * _todayConfigsByRequestID;
}

@property (nonatomic, readonly, copy) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, readonly, copy) NSDictionary *prefetchedHeldRecordsByType;
@property (nonatomic, readonly, copy) <FCTodayPrivateData> *privateData;
@property (nonatomic, readonly, copy) NSDictionary *todayConfigsByRequestID;

- (void).cxx_destruct;
- (id)appConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAppConfiguration:(id)arg1 privateData:(id)arg2 todayConfigsByRequestID:(id)arg3 prefetchedHeldRecordsByType:(id)arg4;
- (id)prefetchedHeldRecordsByType;
- (id)privateData;
- (id)todayConfigsByRequestID;

@end
