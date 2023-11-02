
@interface MTRMediaInputClusterInputInfoStruct : NSObject <NSCopying> {
    NSString * _descriptionString;
    NSNumber * _index;
    NSNumber * _inputType;
    NSString * _name;
}

@property (nonatomic, copy) NSString *descriptionString;
@property (nonatomic, copy) NSNumber *index;
@property (nonatomic, copy) NSNumber *inputType;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionString;
- (id)index;
- (id)init;
- (id)inputType;
- (id)name;
- (void)setDescriptionString:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setInputType:(id)arg1;
- (void)setName:(id)arg1;

@end
