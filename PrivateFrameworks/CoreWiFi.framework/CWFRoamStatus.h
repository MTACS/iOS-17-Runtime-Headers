
@interface CWFRoamStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSData * _SSID;
    NSUUID * _UUID;
    NSDate * _endedAt;
    NSString * _fromBSSID;
    unsigned long long  _fromChannel;
    long long  _fromRSSI;
    NSString * _interfaceName;
    NSString * _originOUI;
    int  _reason;
    NSDate * _startedAt;
    int  _status;
    NSString * _targetOUI;
    unsigned long long  _timeEnded;
    unsigned long long  _timeStarted;
    NSString * _toBSSID;
    unsigned long long  _toChannel;
    long long  _toRSSI;
}

@property (nonatomic, copy) NSData *SSID;
@property (nonatomic, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) double duration;
@property (nonatomic, copy) NSDate *endedAt;
@property (nonatomic, copy) NSString *fromBSSID;
@property (nonatomic) unsigned long long fromChannel;
@property (nonatomic) long long fromRSSI;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, readonly, copy) NSString *networkName;
@property (nonatomic, copy) NSString *originOUI;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSDate *startedAt;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetOUI;
@property (nonatomic) unsigned long long timeEnded;
@property (nonatomic) unsigned long long timeStarted;
@property (nonatomic, copy) NSString *toBSSID;
@property (nonatomic) unsigned long long toChannel;
@property (nonatomic) long long toRSSI;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (id)SSID;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endedAt;
- (id)fromBSSID;
- (unsigned long long)fromChannel;
- (long long)fromRSSI;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoamStatus:(id)arg1;
- (id)networkName;
- (id)originOUI;
- (int)reason;
- (void)setEndedAt:(id)arg1;
- (void)setFromBSSID:(id)arg1;
- (void)setFromChannel:(unsigned long long)arg1;
- (void)setFromRSSI:(long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setOriginOUI:(id)arg1;
- (void)setReason:(int)arg1;
- (void)setSSID:(id)arg1;
- (void)setStartedAt:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetOUI:(id)arg1;
- (void)setTimeEnded:(unsigned long long)arg1;
- (void)setTimeStarted:(unsigned long long)arg1;
- (void)setToBSSID:(id)arg1;
- (void)setToChannel:(unsigned long long)arg1;
- (void)setToRSSI:(long long)arg1;
- (void)setUUID:(id)arg1;
- (id)startedAt;
- (int)status;
- (id)targetOUI;
- (unsigned long long)timeEnded;
- (unsigned long long)timeStarted;
- (id)toBSSID;
- (unsigned long long)toChannel;
- (long long)toRSSI;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dictionary;

@end
