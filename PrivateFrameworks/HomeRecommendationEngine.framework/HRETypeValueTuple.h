
@interface HRETypeValueTuple : NSObject {
    NSString * _type;
    id  _value;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id value;

+ (id)type:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 value:(id)arg2;
- (id)type;
- (id)value;

@end
