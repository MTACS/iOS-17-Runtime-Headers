
@interface OBAnalyticsEvent : NSObject {
    NSString * _name;
    NSDictionary * _payload;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *payload;

+ (id)eventWithName:(id)arg1 withPayload:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)payload;
- (void)setName:(id)arg1;
- (void)setPayload:(id)arg1;

@end
