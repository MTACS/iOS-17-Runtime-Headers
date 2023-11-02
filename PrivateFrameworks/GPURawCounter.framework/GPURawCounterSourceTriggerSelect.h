
@interface GPURawCounterSourceTriggerSelect : NSObject {
    NSString * _name;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;

+ (id)selectWithName:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (id)name;
- (id)options;

@end
