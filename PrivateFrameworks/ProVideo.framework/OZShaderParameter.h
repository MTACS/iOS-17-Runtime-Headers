
@interface OZShaderParameter : NSObject {
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

- (void)dealloc;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (id)name;
- (long long)type;

@end
