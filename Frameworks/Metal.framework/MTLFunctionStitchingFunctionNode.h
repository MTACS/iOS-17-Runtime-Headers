
@interface MTLFunctionStitchingFunctionNode : NSObject <MTLFunctionStitchingNode> {
    NSArray * _arguments;
    NSArray * _controlDependencies;
    NSString * _name;
}

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic, copy) NSArray *controlDependencies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

- (id)arguments;
- (id)controlDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 arguments:(id)arg2 controlDependencies:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setArguments:(id)arg1;
- (void)setControlDependencies:(id)arg1;
- (void)setName:(id)arg1;

@end
