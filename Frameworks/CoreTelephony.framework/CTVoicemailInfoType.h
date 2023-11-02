
@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding> {
    bool  _available;
    NSNumber * _count;
    bool  _isNetworkOriginated;
    bool  _isVoiceMailMWI;
    NSString * _url;
}

@property (nonatomic) bool available;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic) bool isNetworkOriginated;
@property (nonatomic) bool isVoiceMailMWI;
@property (nonatomic, retain) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)available;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithParam:(id)arg1 available:(bool)arg2 count:(id)arg3 isNetworkOriginated:(bool)arg4 isVoiceMailMWI:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTVoicemailInfoType:(id)arg1;
- (bool)isNetworkOriginated;
- (bool)isVoiceMailMWI;
- (void)setAvailable:(bool)arg1;
- (void)setCount:(id)arg1;
- (void)setIsNetworkOriginated:(bool)arg1;
- (void)setIsVoiceMailMWI:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
