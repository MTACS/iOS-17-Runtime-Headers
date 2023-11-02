
@interface SKADatabasePublishedLocalStatus : NSObject {
    NSDate * _creationDate;
    NSString * _identifier;
    NSString * _keyDomain;
    NSString * _keyName;
    NSDate * _modificationDate;
    NSData * _payload;
    long long  _targetDevicesFlags;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *keyDomain;
@property (nonatomic, retain) NSString *keyName;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) long long targetDevicesFlags;

- (void).cxx_destruct;
- (id)creationDate;
- (id)identifier;
- (id)initWithCoreDataPublishedLocalStatus:(id)arg1;
- (id)initWithIdentifier:(id)arg1 creationDate:(id)arg2 modificationDate:(id)arg3 keyDomain:(id)arg4 keyName:(id)arg5 payload:(id)arg6 targetDevicesFlags:(long long)arg7;
- (bool)isEqualToStatus:(id)arg1;
- (id)keyDomain;
- (id)keyName;
- (id)modificationDate;
- (id)payload;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyDomain:(id)arg1;
- (void)setKeyName:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setTargetDevicesFlags:(long long)arg1;
- (long long)targetDevicesFlags;

@end
