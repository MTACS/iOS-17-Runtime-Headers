
@interface ICQCloudStorageApps : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _apps;
    NSString * _genericErrorMessage;
}

@property (nonatomic, retain) NSArray *apps;
@property (nonatomic, copy) NSString *genericErrorMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genericErrorMessage;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApps:(id)arg1;
- (void)setGenericErrorMessage:(id)arg1;

@end
