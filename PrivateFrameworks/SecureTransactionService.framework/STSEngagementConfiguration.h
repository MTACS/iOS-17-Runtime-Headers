
@interface STSEngagementConfiguration : NSObject {
    unsigned long long  _dataRetrievalType;
    unsigned long long  _deviceEngagementType;
    NSData * _engagementData;
}

@property (nonatomic, readonly) unsigned long long dataRetrievalType;
@property (nonatomic, readonly) unsigned long long deviceEngagementType;
@property (nonatomic, readonly) NSData *engagementData;

+ (id)configurationWithDeviceEngagementType:(unsigned long long)arg1 dataRetrievalType:(unsigned long long)arg2 engagementData:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)dataRetrievalType;
- (unsigned long long)deviceEngagementType;
- (id)engagementData;
- (id)initWithDeviceEngagementType:(unsigned long long)arg1 dataRetrievalType:(unsigned long long)arg2 engagementData:(id)arg3;

@end
