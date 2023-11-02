
@interface _GPURawCounterSourceTrigger : NSObject <GPURawCounterSourceTrigger> {
    NSString * _description;
    NSString * _name;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 description:(id)arg2 options:(id)arg3;
- (id)name;
- (id)options;

@end
