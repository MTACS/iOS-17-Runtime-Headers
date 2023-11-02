
@interface SGURL : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSDate * _documentDate;
    NSString * _documentIdentifier;
    double  _documentTimeInterval;
    NSString * _documentTitle;
    unsigned char  _flags;
    NSString * _groupIdentifier;
    NSDate * _receivedAt;
    NSString * _receivedFromHandle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDate *documentDate;
@property (nonatomic, readonly) NSString *documentIdentifier;
@property (nonatomic, readonly) double documentTimeInterval;
@property (nonatomic, readonly) NSString *documentTitle;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSDate *receivedAt;
@property (nonatomic, readonly) NSString *receivedFromHandle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentDate;
- (id)documentIdentifier;
- (double)documentTimeInterval;
- (id)documentTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackDescription;
- (unsigned char)flags;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 receivedFromHandle:(id)arg3 bundleIdentifier:(id)arg4 groupIdentifier:(id)arg5 documentIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 flags:(unsigned char)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToURL:(id)arg1;
- (id)nonFeedbackFlagDescription;
- (id)receivedAt;
- (id)receivedFromHandle;
- (id)title;
- (id)url;

@end
