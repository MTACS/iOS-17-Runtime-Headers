
@interface HMCoreAnalyticsFieldData : HMFObject {
    NSString * _name;
    NSObject * _value;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSObject *value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)name;
- (id)value;

@end
