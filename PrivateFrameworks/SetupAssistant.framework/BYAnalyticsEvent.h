
@interface BYAnalyticsEvent : NSObject {
    NSString * _name;
    NSDictionary * _payload;
    bool  _persist;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic) bool persist;

+ (id)eventWithName:(id)arg1 withPayload:(id)arg2 persist:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)payload;
- (bool)persist;
- (void)setName:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPersist:(bool)arg1;

@end
