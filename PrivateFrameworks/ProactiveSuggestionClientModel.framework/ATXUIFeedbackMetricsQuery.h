
@interface ATXUIFeedbackMetricsQuery : NSObject {
    long long  _clientModelType;
    unsigned char  _consumerSubType;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic) long long clientModelType;
@property (nonatomic) unsigned char consumerSubType;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (long long)clientModelType;
- (unsigned char)consumerSubType;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackMetricsQuery:(id)arg1;
- (void)setClientModelType:(long long)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
