
@interface IMCollaborationNoticeMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _contentTitle;
    UTType * _contentType;
    NSURL * _contentURL;
    NSString * _messageGUID;
    long long  _type;
    NSNumber * _typeNumber;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *contentTitle;
@property (nonatomic, retain) UTType *contentType;
@property (nonatomic, retain) NSURL *contentURL;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *typeNumber;

+ (id)metadataWithType:(long long)arg1 bundleIdentifier:(id)arg2 contentURL:(id)arg3 contentTitle:(id)arg4 contentType:(id)arg5 messageGUID:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)contentTitle;
- (id)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNoticeType:(long long)arg1 bundleIdentifier:(id)arg2 contentURL:(id)arg3 contentTitle:(id)arg4 contentType:(id)arg5 messageGUID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)messageGUID;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentTitle:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeNumber:(id)arg1;
- (long long)type;
- (id)typeNumber;

@end
