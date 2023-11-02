
@interface IKAppPrototypeIdentifier : NSObject <NSCopying> {
    NSDictionary * _groupingValues;
    NSString * _identifier;
    NSString * _selector;
}

@property (nonatomic, readonly, copy) NSDictionary *groupingValues;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *selector;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupingValues;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)selector;

@end
