
@interface CWFAutoJoinStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSDate * _endedAt;
    NSString * _interfaceName;
    NSArray * _joinAttempts;
    bool  _result;
    NSDate * _startedAt;
    long long  _state;
    long long  _trigger;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) double duration;
@property (nonatomic, copy) NSDate *endedAt;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSArray *joinAttempts;
@property (nonatomic) bool result;
@property (nonatomic, copy) NSDate *startedAt;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) long long trigger;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopy;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endedAt;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutoJoinStatus:(id)arg1;
- (id)joinAttempts;
- (bool)result;
- (void)setEndedAt:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setJoinAttempts:(id)arg1;
- (void)setResult:(bool)arg1;
- (void)setStartedAt:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTrigger:(long long)arg1;
- (void)setUUID:(id)arg1;
- (id)startedAt;
- (long long)state;
- (long long)trigger;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dictionary;

@end
