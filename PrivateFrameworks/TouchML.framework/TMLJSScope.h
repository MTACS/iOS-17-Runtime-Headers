
@interface TMLJSScope : NSObject {
    int  _type;
    NSMutableSet * _vars;
}

@property (nonatomic) int type;
@property (nonatomic, retain) NSMutableSet *vars;

- (void).cxx_destruct;
- (void)addVar:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVars:(id)arg1;
- (int)type;
- (id)vars;

@end
