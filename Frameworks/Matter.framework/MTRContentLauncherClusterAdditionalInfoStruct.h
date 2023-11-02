
@interface MTRContentLauncherClusterAdditionalInfoStruct : NSObject <NSCopying> {
    NSString * _name;
    NSString * _value;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
