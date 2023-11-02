
@interface MTRContentLauncherClusterParameterStruct : NSObject <NSCopying> {
    NSArray * _externalIDList;
    NSNumber * _type;
    NSString * _value;
}

@property (nonatomic, copy) NSArray *externalIDList;
@property (nonatomic, copy) NSNumber *type;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalIDList;
- (id)init;
- (void)setExternalIDList:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)value;

@end
