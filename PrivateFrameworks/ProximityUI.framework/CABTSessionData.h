
@interface CABTSessionData : NSObject {
    NSDictionary * _configureCompleteEvent;
    NSDictionary * _configureEvent;
    NSDictionary * _deinitEvent;
    bool  _isOwner;
    NSNumber * _numberOfErrorEvents;
    NSUUID * _productUUID;
    int  _txPower;
}

@property (nonatomic, retain) NSDictionary *configureCompleteEvent;
@property (nonatomic, retain) NSDictionary *configureEvent;
@property (nonatomic, retain) NSDictionary *deinitEvent;
@property (nonatomic) bool isOwner;
@property (nonatomic, retain) NSNumber *numberOfErrorEvents;
@property (nonatomic, retain) NSUUID *productUUID;
@property (nonatomic) int txPower;

- (void).cxx_destruct;
- (void)configure:(id)arg1 withOwner:(bool)arg2;
- (void)configureComplete:(id)arg1 withTxPower:(int)arg2;
- (id)configureCompleteEvent;
- (id)configureEvent;
- (void)deinit:(id)arg1;
- (id)deinitEvent;
- (void)error:(id)arg1;
- (id)init;
- (bool)isOwner;
- (void)logData;
- (id)numberOfErrorEvents;
- (id)productUUID;
- (void)setConfigureCompleteEvent:(id)arg1;
- (void)setConfigureEvent:(id)arg1;
- (void)setDeinitEvent:(id)arg1;
- (void)setIsOwner:(bool)arg1;
- (void)setNumberOfErrorEvents:(id)arg1;
- (void)setProductUUID:(id)arg1;
- (void)setTxPower:(int)arg1;
- (int)txPower;

@end
