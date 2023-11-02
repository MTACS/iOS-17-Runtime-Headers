
@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _crashCount;
    unsigned long long  _multiTime;
    unsigned long long  _nearOwnerTime;
    unsigned char  _overflowFlag;
    unsigned int  _ownerPlaySoundCount;
    unsigned int  _ownerPlaySoundTime;
    unsigned int  _rangingCount;
    unsigned int  _rangingTime;
    unsigned char  _version;
    unsigned long long  _wildTime;
}

@property (nonatomic) unsigned short crashCount;
@property (nonatomic) unsigned long long multiTime;
@property (nonatomic) unsigned long long nearOwnerTime;
@property (nonatomic) unsigned char overflowFlag;
@property (nonatomic) unsigned int ownerPlaySoundCount;
@property (nonatomic) unsigned int ownerPlaySoundTime;
@property (nonatomic) unsigned int rangingCount;
@property (nonatomic) unsigned int rangingTime;
@property (nonatomic) unsigned char version;
@property (nonatomic) unsigned long long wildTime;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)crashCount;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)multiTime;
- (unsigned long long)nearOwnerTime;
- (unsigned char)overflowFlag;
- (unsigned int)ownerPlaySoundCount;
- (unsigned int)ownerPlaySoundTime;
- (unsigned int)rangingCount;
- (unsigned int)rangingTime;
- (void)setCrashCount:(unsigned short)arg1;
- (void)setMultiTime:(unsigned long long)arg1;
- (void)setNearOwnerTime:(unsigned long long)arg1;
- (void)setOverflowFlag:(unsigned char)arg1;
- (void)setOwnerPlaySoundCount:(unsigned int)arg1;
- (void)setOwnerPlaySoundTime:(unsigned int)arg1;
- (void)setRangingCount:(unsigned int)arg1;
- (void)setRangingTime:(unsigned int)arg1;
- (void)setVersion:(unsigned char)arg1;
- (void)setWildTime:(unsigned long long)arg1;
- (unsigned char)version;
- (unsigned long long)wildTime;

@end
