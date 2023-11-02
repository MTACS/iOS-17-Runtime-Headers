
@interface ENSSKeychainQuery : NSObject {
    NSString * _accessGroup;
    NSString * _account;
    NSString * _label;
    NSData * _passwordData;
    NSString * _service;
    unsigned long long  _synchronizationMode;
}

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSData *passwordData;
@property (nonatomic, copy) <NSCoding> *passwordObject;
@property (nonatomic, copy) NSString *service;
@property (nonatomic) unsigned long long synchronizationMode;

+ (id)errorWithCode:(int)arg1;
+ (bool)isSynchronizationAvailable;

- (void).cxx_destruct;
- (id)accessGroup;
- (id)account;
- (bool)deleteItem:(id*)arg1;
- (bool)fetch:(id*)arg1;
- (id)fetchAll:(id*)arg1;
- (id)label;
- (id)password;
- (id)passwordData;
- (id)passwordObject;
- (id)query;
- (bool)save:(id*)arg1;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordData:(id)arg1;
- (void)setPasswordObject:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizationMode:(unsigned long long)arg1;
- (unsigned long long)synchronizationMode;

@end
