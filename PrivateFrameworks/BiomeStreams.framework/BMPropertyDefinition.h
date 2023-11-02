
@interface BMPropertyDefinition : NSObject {
    NSArray * _classPropertyDefinitions;
    NSString * _comment;
    NSArray * _enumValues;
    NSString * _name;
    int  _type;
}

@property (nonatomic, readonly) NSArray *classPropertyDefinitions;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSArray *enumValues;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)classPropertyDefinitions;
- (id)comment;
- (id)enumValues;
- (id)initWithName:(id)arg1 type:(int)arg2 enumValues:(id)arg3 classPropertyDefinitions:(id)arg4 comment:(id)arg5;
- (id)name;
- (int)type;

@end
