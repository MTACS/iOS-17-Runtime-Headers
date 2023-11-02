
@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding> {
    NSArray * _apps;
    NSDictionary * _context;
    NSString * _logKey;
    double  _timeout;
}

@property (nonatomic, retain) NSArray *apps;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apps;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logKey;
- (void)setApps:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
