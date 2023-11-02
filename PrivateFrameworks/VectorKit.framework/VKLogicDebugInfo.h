
@interface VKLogicDebugInfo : NSObject {
    unsigned long long  _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)initWithName:(id)arg1 identifier:(unsigned long long)arg2;
- (id)name;

@end
