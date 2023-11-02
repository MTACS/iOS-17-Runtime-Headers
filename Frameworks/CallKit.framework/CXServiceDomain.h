
@interface CXServiceDomain : NSObject {
    NSString * _machName;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *machName;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)callKitServiceDomain;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 machName:(id)arg2;
- (id)machName;
- (id)name;

@end
