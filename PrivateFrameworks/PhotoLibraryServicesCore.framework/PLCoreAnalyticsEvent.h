
@interface PLCoreAnalyticsEvent : NSObject {
    NSString * _event;
    NSMutableDictionary * _mutablePayload;
}

@property (readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 value:(id)arg2;
- (id)description;
- (id)initWithEvent:(id)arg1 payload:(id)arg2;
- (void)mergePayload:(id)arg1;
- (id)payload;
- (void)publish;
- (void)removeKey:(id)arg1;

@end
