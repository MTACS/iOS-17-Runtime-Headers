
@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (nonatomic, copy) NSString *service;
@property (nonatomic, copy) NSString *username;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;

@end
