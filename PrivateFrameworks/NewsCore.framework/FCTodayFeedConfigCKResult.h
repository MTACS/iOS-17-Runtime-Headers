
@interface FCTodayFeedConfigCKResult : NSObject {
    NSData * _configData;
    NSDictionary * _recordsByType;
}

@property (nonatomic, readonly) NSData *configData;
@property (nonatomic, readonly) NSDictionary *recordsByType;

- (void).cxx_destruct;
- (id)configData;
- (id)initWithRecordsByType:(id)arg1;
- (id)recordsByType;

@end
