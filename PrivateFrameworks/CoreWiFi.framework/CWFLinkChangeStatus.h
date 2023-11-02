
@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _CCA;
    long long  _RSSI;
    NSString * _interfaceName;
    bool  _involuntaryLinkDown;
    bool  _linkDown;
    bool  _linkDownDebounceInProgress;
    long long  _noise;
    int  _reason;
    long long  _subreason;
    NSDate * _timestamp;
}

@property (nonatomic) unsigned long long CCA;
@property (nonatomic) long long RSSI;
@property (nonatomic, copy) NSString *interfaceName;
@property (getter=isInvoluntaryLinkDown, nonatomic) bool involuntaryLinkDown;
@property (getter=isLinkDown, nonatomic) bool linkDown;
@property (getter=isLinkDownDebounceInProgress, nonatomic) bool linkDownDebounceInProgress;
@property (nonatomic) long long noise;
@property (nonatomic) int reason;
@property (nonatomic) long long subreason;
@property (nonatomic, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)CCA;
- (long long)RSSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLinkChangeStatus:(id)arg1;
- (bool)isInvoluntaryLinkDown;
- (bool)isLinkDown;
- (bool)isLinkDownDebounceInProgress;
- (long long)noise;
- (int)reason;
- (void)setCCA:(unsigned long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInvoluntaryLinkDown:(bool)arg1;
- (void)setLinkDown:(bool)arg1;
- (void)setLinkDownDebounceInProgress:(bool)arg1;
- (void)setNoise:(long long)arg1;
- (void)setRSSI:(long long)arg1;
- (void)setReason:(int)arg1;
- (void)setSubreason:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (long long)subreason;
- (id)timestamp;

@end
