
@interface CPMSClientDescription : NSObject {
    long long  _clientId;
    id /* block */  _getCurrentPower;
    bool  _isContinuous;
    id /* block */  _notificationCallback;
    unsigned int  _powerBudgetUpdateMinimumPeriod;
    NSDictionary * _powerLevels;
}

@property (nonatomic) long long clientId;
@property (nonatomic, copy) id /* block */ getCurrentPower;
@property (nonatomic) bool isContinuous;
@property (nonatomic, copy) id /* block */ notificationCallback;
@property (nonatomic) unsigned int powerBudgetUpdateMinimumPeriod;
@property (nonatomic, retain) NSDictionary *powerLevels;

- (void).cxx_destruct;
- (long long)clientId;
- (id)description;
- (id /* block */)getCurrentPower;
- (bool)isContinuous;
- (bool)isEqual:(id)arg1;
- (id /* block */)notificationCallback;
- (unsigned int)powerBudgetUpdateMinimumPeriod;
- (id)powerLevels;
- (void)setClientId:(long long)arg1;
- (void)setGetCurrentPower:(id /* block */)arg1;
- (void)setIsContinuous:(bool)arg1;
- (void)setNotificationCallback:(id /* block */)arg1;
- (void)setPowerBudgetUpdateMinimumPeriod:(unsigned int)arg1;
- (void)setPowerLevels:(id)arg1;

@end
