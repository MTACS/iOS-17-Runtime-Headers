
@interface AFMyriadSession : NSObject <NSCopying, NSSecureCoding> {
    NSData * _currentElectionAdvertisementData;
    NSUUID * _currentElectionAdvertisementId;
    NSDictionary * _electionAdvertisementDataByIds;
    unsigned long long  _generation;
    NSUUID * _sessionId;
}

@property (nonatomic, readonly, copy) NSData *currentElectionAdvertisementData;
@property (nonatomic, readonly, copy) NSUUID *currentElectionAdvertisementId;
@property (nonatomic, readonly, copy) NSDictionary *electionAdvertisementDataByIds;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly, copy) NSUUID *sessionId;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentElectionAdvertisementData;
- (id)currentElectionAdvertisementId;
- (id)description;
- (id)electionAdvertisementDataByIds;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 sessionId:(id)arg2 currentElectionAdvertisementId:(id)arg3 currentElectionAdvertisementData:(id)arg4 electionAdvertisementDataByIds:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)sessionId;

@end
