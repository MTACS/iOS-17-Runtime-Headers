
@interface AKDeviceListDeltaMessagePayload : NSObject {
    NSString * _altDSID;
    NSString * _machineID;
    NSArray * _machineIDs;
    unsigned long long  _operation;
    NSString * _serialNumber;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *machineID;
@property (nonatomic, readonly, copy) NSArray *machineIDs;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (unsigned long long)_convertOperationToEnum:(id)arg1;
- (id)altDSID;
- (id)initWithResponseBody:(id)arg1;
- (id)machineID;
- (id)machineIDs;
- (unsigned long long)operation;
- (id)serialNumber;
- (id)timestamp;

@end
