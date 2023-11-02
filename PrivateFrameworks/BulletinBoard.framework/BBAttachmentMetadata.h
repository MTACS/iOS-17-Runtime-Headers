
@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURL * _URL;
    NSUUID * _UUID;
    bool  _hiddenFromDefaultExpandedView;
    NSString * _identifier;
    NSDictionary * _thumbnailGeneratorUserInfo;
    bool  _thumbnailHidden;
    long long  _type;
    NSString * _uniformType;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) bool hiddenFromDefaultExpandedView;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *thumbnailGeneratorUserInfo;
@property (nonatomic, readonly) bool thumbnailHidden;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *uniformType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)UUID;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 identifier:(id)arg3 uniformType:(id)arg4 thumbnailGeneratorUserInfo:(id)arg5 thumbnailHidden:(bool)arg6 hiddenFromDefaultExpandedView:(bool)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContentModificationsRelativeTo:(id)arg1;
- (unsigned long long)hash;
- (bool)hiddenFromDefaultExpandedView;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)thumbnailGeneratorUserInfo;
- (bool)thumbnailHidden;
- (long long)type;
- (id)uniformType;

@end
