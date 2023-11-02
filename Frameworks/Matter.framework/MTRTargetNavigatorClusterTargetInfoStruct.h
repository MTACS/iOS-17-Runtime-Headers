
@interface MTRTargetNavigatorClusterTargetInfoStruct : NSObject <NSCopying> {
    NSNumber * _identifier;
    NSString * _name;
}

@property (nonatomic, copy) NSNumber *identifier;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
