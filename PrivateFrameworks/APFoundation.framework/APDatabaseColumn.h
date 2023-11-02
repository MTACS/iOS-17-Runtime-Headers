
@interface APDatabaseColumn : NSObject {
    NSString * _name;
    long long  _type;
    id  _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 forColumnType:(long long)arg2 withValue:(id)arg3;
- (id)name;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

@end
