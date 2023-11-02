
@interface SHHost : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)name;

@end
