
@interface CASessionData : NSObject {
    NSDictionary * _configureCompleteEvent;
    NSDictionary * _configureEvent;
    NSDictionary * _deinitEvent;
    NSNumber * _isOwner;
    NSNumber * _numberOfErrorEvents;
    NSUUID * _productUUID;
}

@property (nonatomic, retain) NSDictionary *configureCompleteEvent;
@property (nonatomic, retain) NSDictionary *configureEvent;
@property (nonatomic, retain) NSDictionary *deinitEvent;
@property (nonatomic, retain) NSNumber *isOwner;
@property (nonatomic, retain) NSNumber *numberOfErrorEvents;
@property (nonatomic, retain) NSUUID *productUUID;

- (void).cxx_destruct;
- (void)configure:(id)arg1;
- (void)configureComplete:(id)arg1;
- (id)configureCompleteEvent;
- (id)configureEvent;
- (void)deinit:(id)arg1;
- (id)deinitEvent;
- (void)error:(id)arg1;
- (id)init;
- (id)isOwner;
- (void)logData;
- (id)numberOfErrorEvents;
- (id)productUUID;
- (void)setConfigureCompleteEvent:(id)arg1;
- (void)setConfigureEvent:(id)arg1;
- (void)setDeinitEvent:(id)arg1;
- (void)setIsOwner:(id)arg1;
- (void)setNumberOfErrorEvents:(id)arg1;
- (void)setProductUUID:(id)arg1;

@end
