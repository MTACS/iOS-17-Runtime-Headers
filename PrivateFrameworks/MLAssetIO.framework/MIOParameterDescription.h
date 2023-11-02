
@interface MIOParameterDescription : NSObject {
    id  _defaultValue;
    NSString * _key;
    MIONumericConstraint * _numericConstraint;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) MIONumericConstraint *numericConstraint;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 boolParameter:(const void*)arg2;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;
- (id)initWithKey:(id)arg1 doubleParameter:(const void*)arg2;
- (id)initWithKey:(id)arg1 int64Parameter:(const void*)arg2;
- (id)initWithKey:(id)arg1 stringParameter:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)numericConstraint;

@end
