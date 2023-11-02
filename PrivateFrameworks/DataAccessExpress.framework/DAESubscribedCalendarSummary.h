
@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding> {
    NSString * _color;
    NSData * _data;
    NSString * _notes;
    double  _refreshInterval;
    NSString * _subscriptionID;
    NSURL * _subscriptionURL;
    NSString * _title;
}

@property (nonatomic, retain) NSString *color;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic) double refreshInterval;
@property (nonatomic, retain) NSString *subscriptionID;
@property (nonatomic, retain) NSURL *subscriptionURL;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)notes;
- (double)refreshInterval;
- (void)setColor:(id)arg1;
- (void)setData:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setRefreshInterval:(double)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSubscriptionURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subscriptionID;
- (id)subscriptionURL;
- (id)title;

@end
