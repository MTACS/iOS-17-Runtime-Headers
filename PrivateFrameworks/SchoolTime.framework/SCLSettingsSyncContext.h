
@interface SCLSettingsSyncContext : NSObject <NSSecureCoding> {
    NSError * _error;
    NSString * _messageIdentifier;
    NSMutableArray * _recoveryHistory;
    unsigned long long  _syncStatus;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, readonly) NSArray *recoveryHistory;
@property (nonatomic) unsigned long long syncStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRecoveryHistory:(unsigned long long)arg1;
- (void)clearRecoveryHistory;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)messageIdentifier;
- (id)recoveryHistory;
- (void)setError:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setSyncStatus:(unsigned long long)arg1;
- (unsigned long long)syncStatus;

@end
