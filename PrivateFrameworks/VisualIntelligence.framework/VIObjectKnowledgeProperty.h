
@interface VIObjectKnowledgeProperty : NSObject <NSCopying> {
    NSString * _name;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)value;

@end
