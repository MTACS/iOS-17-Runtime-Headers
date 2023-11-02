
@interface FCTodayFeedConfigResponse : NSObject {
    NSData * _ckConfigData;
    NSDictionary * _ckRecordsByType;
    NSData * _newsEdgeConfigData;
}

@property (nonatomic, readonly) NSData *ckConfigData;
@property (nonatomic, readonly) NSDictionary *ckRecordsByType;
@property (nonatomic, readonly) NSData *newsEdgeConfigData;

- (void).cxx_destruct;
- (id)ckConfigData;
- (id)ckRecordsByType;
- (id)initWithCKConfigData:(id)arg1 ckRecordsByType:(id)arg2 newsEdgeConfigData:(id)arg3;
- (id)newsEdgeConfigData;

@end
