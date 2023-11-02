
@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _displayLocation;
    NSDictionary * _thumbnailGeneratorUserInfo;
}

@property (nonatomic, readonly) unsigned long long displayLocation;
@property (nonatomic, readonly, copy) NSDictionary *thumbnailGeneratorUserInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDisplayLocation:(unsigned long long)arg1 thumbnailGeneratorUserInfo:(id)arg2;
- (id)_initWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)displayLocation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)thumbnailGeneratorUserInfo;

@end
