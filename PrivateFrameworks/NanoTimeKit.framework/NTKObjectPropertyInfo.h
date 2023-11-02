
@interface NTKObjectPropertyInfo : NSObject {
    bool  _isDynamic;
    NSString * _name;
    NSString * _typeString;
}

@property (nonatomic) bool isDynamic;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *typeString;

- (void).cxx_destruct;
- (bool)isDynamic;
- (id)name;
- (void)setIsDynamic:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTypeString:(id)arg1;
- (id)typeString;

@end
