
@interface REMTemplatePublicLink : NSObject <NSCopying, NSSecureCoding> {
    bool  _canBeUpdated;
    REMTemplatePublicLinkConfiguration * _configuration;
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSDate * _lastModifiedDate;
    NSURL * _url;
}

@property (nonatomic, readonly) bool canBeUpdated;
@property (nonatomic, readonly) REMTemplatePublicLinkConfiguration *configuration;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeUpdated;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 creationDate:(id)arg3 lastModifiedDate:(id)arg4 expirationDate:(id)arg5 canBeUpdated:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedDate;
- (id)url;

@end
