
@interface HKObjectAuthorizationRecord : NSObject <NSSecureCoding> {
    double  _modificationDate;
    NSUUID * _objectUUID;
    NSUUID * _sessionUUID;
    NSUUID * _sourceUUID;
    long long  _status;
}

@property (nonatomic) double modificationDate;
@property (nonatomic, copy) NSUUID *objectUUID;
@property (nonatomic, copy) NSUUID *sessionUUID;
@property (nonatomic, copy) NSUUID *sourceUUID;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectUUID:(id)arg1 sourceUUID:(id)arg2 sessionUUID:(id)arg3 status:(long long)arg4 modificationDate:(double)arg5;
- (bool)isEqual:(id)arg1;
- (double)modificationDate;
- (id)objectUUID;
- (id)sessionUUID;
- (void)setModificationDate:(double)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)sourceUUID;
- (long long)status;

@end
