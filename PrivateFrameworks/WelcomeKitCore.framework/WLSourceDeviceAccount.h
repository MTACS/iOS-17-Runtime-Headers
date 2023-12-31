
@interface WLSourceDeviceAccount : NSObject {
    NSString * _identifier;
    unsigned long long  _sqlID;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long sqlID;

+ (bool)accountInfoArrayContainsNonSyncableAccount:(id)arg1;
+ (bool)accountInfoRepresentsSyncableAccount:(id)arg1;
+ (id)accountWithInfo:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (unsigned long long)sqlID;

@end
