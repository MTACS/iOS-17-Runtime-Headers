
@interface WiFiChannel : NSObject <NSCopying, NSSecureCoding> {
    long long  _bandwidth;
    unsigned int  _channelNumber;
    bool  _extensionChannelAbove;
    bool  _is2_4GHz;
    bool  _is5GHz;
    bool  _is6GHz;
    bool  _isDFS;
}

@property (nonatomic, readonly) long long bandwidth;
@property (nonatomic, readonly) unsigned int channelNumber;
@property (nonatomic, readonly) bool extensionChannelAbove;
@property (nonatomic, readonly) bool is2_4GHz;
@property (nonatomic, readonly) bool is5GHz;
@property (nonatomic, readonly) bool is6GHz;
@property (nonatomic, readonly) bool isDFS;

+ (bool)supportsSecureCoding;

- (long long)bandwidth;
- (unsigned int)channelNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)extensionChannelAbove;
- (unsigned long long)hash;
- (id)initWithChannelNumber:(unsigned int)arg1 bandwidth:(long long)arg2 is2_4GHz:(bool)arg3 is5GHz:(bool)arg4 is6GHz:(bool)arg5 isDFS:(bool)arg6 extensionChannelAbove:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)is2_4GHz;
- (bool)is5GHz;
- (bool)is6GHz;
- (bool)isDFS;
- (bool)isEqual:(id)arg1;

@end
