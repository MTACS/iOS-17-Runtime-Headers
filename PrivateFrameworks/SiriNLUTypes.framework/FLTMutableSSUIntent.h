
@interface FLTMutableSSUIntent : FLTSSUIntent

@property (nonatomic, copy) NSArray *examples;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *parameters;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)examples;
- (id)init;
- (id)name;
- (id)parameters;
- (void)setExamples:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;

@end
