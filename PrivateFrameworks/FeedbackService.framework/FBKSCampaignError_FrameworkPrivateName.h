
@interface FBKSCampaignError_FrameworkPrivateName : NSObject {
    void code;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void domain;
    void errorDescription;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *errorDescription;

- (void).cxx_destruct;
- (long long)code;
- (id)date;
- (id)description;
- (id)domain;
- (id)errorDescription;
- (id)init;

@end
