
@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding> {
    AMSProcessInfo * _clientInfo;
    NSArray * _destinations;
    NSArray * _events;
    NSString * _logKey;
    double  _timeout;
}

@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)initWithCoder:(id)arg1;
- (id)logKey;
- (void)setClientInfo:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
