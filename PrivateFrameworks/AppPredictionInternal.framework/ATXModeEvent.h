
@interface ATXModeEvent : NSObject <BMStoreData> {
    NSDate * _endDate;
    <ATXModeEntityProtocol> * _entity;
    NSDate * _startDate;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) <ATXModeEntityProtocol> *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)entity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 entity:(id)arg3;
- (id)json;
- (id)jsonRawData;
- (id)serialize;
- (void)setEntity:(id)arg1;
- (id)startDate;

@end
