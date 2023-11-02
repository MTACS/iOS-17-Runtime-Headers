
@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _backingStore;
    NSDate * _deliveryDate;
    NSDate * _expirationDate;
    AFDeviceContextHistoryConfiguration * _historyConfiguration;
    NSArray * _redactedKeyPaths;
    NSString * _type;
}

@property (nonatomic, readonly) NSDate *deliveryDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) AFDeviceContextHistoryConfiguration *historyConfiguration;
@property (nonatomic, readonly) NSArray *redactedKeyPaths;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backingStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)historyConfiguration;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 deliveryDate:(id)arg2 expirationDate:(id)arg3 redactedKeyPaths:(id)arg4 historyConfiguration:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isExpiredByDate:(id)arg1;
- (id)redactedKeyPaths;
- (id)type;

@end
