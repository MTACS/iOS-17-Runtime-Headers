
@interface FBKSCampaign_FrameworkPrivateName : NSObject {
    void state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updatedAt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDate *updatedAt;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)state;
- (id)updatedAt;

@end
