
@interface BYAnalyticsLazyEvent : NSObject {
    NSString * _name;
    id /* block */  _payloadBlock;
    bool  _persist;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) id /* block */ payloadBlock;
@property (nonatomic) bool persist;

+ (id)eventWithName:(id)arg1 withPayloadBlock:(id /* block */)arg2 persist:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id /* block */)payloadBlock;
- (bool)persist;
- (void)setName:(id)arg1;
- (void)setPayloadBlock:(id /* block */)arg1;
- (void)setPersist:(bool)arg1;

@end
