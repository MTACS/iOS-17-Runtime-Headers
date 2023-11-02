
@interface TSBonjourNode : NSObject {
    NSString * _domain;
    NSDictionary * _interfaces;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, copy) NSDictionary *interfaces;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (void)addedOnInterface:(unsigned int)arg1 named:(id)arg2;
- (id)domain;
- (id)init;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3;
- (id)interfaces;
- (id)name;
- (void)removedFromInterface:(unsigned int)arg1 named:(id)arg2;
- (void)setInterfaces:(id)arg1;
- (id)type;

@end
