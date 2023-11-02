
@interface FFFeatureAttribute : NSObject {
    NSString * _name;
    NSString * _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)matchesAgainst:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
