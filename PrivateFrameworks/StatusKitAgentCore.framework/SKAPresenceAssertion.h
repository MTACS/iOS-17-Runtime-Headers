
@interface SKAPresenceAssertion : NSObject {
    SKPresenceOptions * _options;
    NSObject<OS_os_activity> * _osActivity;
    SKPresencePayload * _payload;
    NSString * _presenceIdentifier;
}

@property (nonatomic, readonly, copy) SKPresenceOptions *options;
@property (nonatomic, readonly) NSObject<OS_os_activity> *osActivity;
@property (nonatomic, copy) SKPresencePayload *payload;
@property (nonatomic, readonly, copy) NSString *presenceIdentifier;

+ (id)logger;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPresenceIdentifier:(id)arg1 options:(id)arg2 payload:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPresenceAssertion:(id)arg1;
- (id)options;
- (id)osActivity;
- (id)payload;
- (id)presenceIdentifier;
- (void)setPayload:(id)arg1;

@end
