
@interface MKAnalytics : NSObject {
    MKPayload * _payload;
}

@property (nonatomic, retain) MKPayload *payload;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)createPayload;
- (id)init;
- (id)payload;
- (void)reset;
- (void)send;
- (void)send:(id)arg1 payload:(id)arg2;
- (void)setPayload:(id)arg1;

@end
