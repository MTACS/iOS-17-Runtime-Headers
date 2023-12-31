
@interface ML3DatabaseFunction : NSObject {
    int  _argumentCount;
    NSString * _name;
}

@property (nonatomic) int argumentCount;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (int)argumentCount;
- (id)initWithName:(id)arg1 argumentCount:(int)arg2;
- (id)name;
- (bool)registerWithConnection:(id)arg1;
- (void)setArgumentCount:(int)arg1;
- (void)setName:(id)arg1;

@end
