
@interface DNDSBackingStoreDictionaryContext : NSObject <NSCopying, NSMutableCopying> {
    <DNDSApplicationIdentifierMapping> * _applicationIdentifierMapper;
    <DNDSContactProviding> * _contactProvider;
    NSObject<DNDSBackingStoreRecord> * _currentRecord;
    unsigned long long  _destination;
    unsigned long long  _partitionType;
    bool  _redactSensitiveData;
    NSObject<NSFastEnumeration> * _underlyingHealingSource;
}

@property (nonatomic, readonly) <DNDSApplicationIdentifierMapping> *applicationIdentifierMapper;
@property (nonatomic, readonly) NSArray *arrayHealingSource;
@property (nonatomic, readonly) <DNDSContactProviding> *contactProvider;
@property (nonatomic, retain) NSObject<DNDSBackingStoreRecord> *currentRecord;
@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) NSDictionary *healingSource;
@property (nonatomic, readonly) unsigned long long partitionType;
@property (nonatomic, readonly) bool redactSensitiveData;
@property (nonatomic, retain) NSObject<NSFastEnumeration> *underlyingHealingSource;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)_initWithDestination:(unsigned long long)arg1 partitionType:(unsigned long long)arg2 healingSource:(id)arg3 currentRecord:(id)arg4 redactSensitiveData:(bool)arg5 contactProvider:(id)arg6 applicationIdentifierMapper:(id)arg7;
- (id)applicationIdentifierMapper;
- (id)arrayHealingSource;
- (id)contactProvider;
- (id)copyWithCurrentRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentRecord;
- (unsigned long long)destination;
- (id)healingSource;
- (id)initWithDestination:(unsigned long long)arg1 partitionType:(unsigned long long)arg2 currentRecord:(id)arg3 redactSensitiveData:(bool)arg4 contactProvider:(id)arg5 applicationIdentifierMapper:(id)arg6;
- (id)initWithDestination:(unsigned long long)arg1 partitionType:(unsigned long long)arg2 healingSource:(id)arg3 redactSensitiveData:(bool)arg4 contactProvider:(id)arg5 applicationIdentifierMapper:(id)arg6;
- (id)initWithDestination:(unsigned long long)arg1 partitionType:(unsigned long long)arg2 redactSensitiveData:(bool)arg3 contactProvider:(id)arg4 applicationIdentifierMapper:(id)arg5;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)partitionType;
- (bool)redactSensitiveData;
- (void)setCurrentRecord:(id)arg1;
- (void)setUnderlyingHealingSource:(id)arg1;
- (id)underlyingHealingSource;

@end
