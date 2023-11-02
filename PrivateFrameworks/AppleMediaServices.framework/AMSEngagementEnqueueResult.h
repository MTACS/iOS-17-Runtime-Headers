
@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSDictionary * _data;
    AMSEngagementRequest * _request;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) AMSEngagementRequest *request;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (void)setActions:(id)arg1;
- (void)setData:(id)arg1;
- (void)setRequest:(id)arg1;

@end
