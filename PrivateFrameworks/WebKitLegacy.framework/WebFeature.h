
@interface WebFeature : NSObject {
    unsigned long long  _category;
    bool  _defaultValue;
    NSString * _details;
    bool  _hidden;
    NSString * _key;
    NSString * _name;
    NSString * _preferenceKey;
    unsigned long long  _status;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) bool defaultValue;
@property (nonatomic, readonly, copy) NSString *details;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *preferenceKey;
@property (nonatomic, readonly) unsigned long long status;

- (unsigned long long)category;
- (void)dealloc;
- (bool)defaultValue;
- (id)description;
- (id)details;
- (id)initWithKey:(id)arg1 preferenceKey:(id)arg2 name:(id)arg3 status:(unsigned long long)arg4 category:(unsigned long long)arg5 details:(id)arg6 defaultValue:(bool)arg7 hidden:(bool)arg8;
- (bool)isHidden;
- (id)key;
- (id)name;
- (id)preferenceKey;
- (unsigned long long)status;

@end
