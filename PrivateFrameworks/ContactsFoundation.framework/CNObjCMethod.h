
@interface CNObjCMethod : NSObject {
    int (* _implementation;
    NSString * _name;
    NSString * _typeEncoding;
}

@property (readonly) int (*implementation;
@property (readonly, copy) NSString *name;
@property (readonly) SEL selector;
@property (readonly, copy) NSString *typeEncoding;

+ (id)methodWithName:(id)arg1 implementation:(int (*)arg2 typeEncoding:(id)arg3;

- (void).cxx_destruct;
- (int (*)implementation;
- (id)initWithMethod:(struct objc_method { }*)arg1;
- (id)initWithName:(id)arg1 implementation:(int (*)arg2 typeEncoding:(id)arg3;
- (id)methodBySettingName:(id)arg1;
- (id)name;
- (id)performOnObject:(id)arg1;
- (SEL)selector;
- (id)typeEncoding;

@end
