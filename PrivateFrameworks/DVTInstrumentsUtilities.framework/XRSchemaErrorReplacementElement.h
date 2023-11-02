
@interface XRSchemaErrorReplacementElement : NSObject {
    NSString * _key;
    NSString * _name;
    NSString * _replacementString;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *replacementString;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 key:(id)arg2 replacementString:(id)arg3;
- (id)key;
- (id)name;
- (id)replacementString;
- (void)setKey:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReplacementString:(id)arg1;

@end
