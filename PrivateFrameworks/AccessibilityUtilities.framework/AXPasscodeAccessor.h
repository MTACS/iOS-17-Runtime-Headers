
@interface AXPasscodeAccessor : NSObject {
    NSString * _accountName;
    NSString * _groupName;
    NSObject<OS_os_log> * _logFacility;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSObject<OS_os_log> *logFacility;
@property (nonatomic, readonly) NSString *passcode;
@property (nonatomic, readonly) NSString *serviceName;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_newQuery;
- (id)accountName;
- (bool)attemptToSetPasscode:(id)arg1;
- (id)groupName;
- (id)initWithServiceName:(id)arg1 accountName:(id)arg2 groupName:(id)arg3 logFacility:(id)arg4;
- (id)logFacility;
- (id)passcode;
- (id)serviceName;

@end
