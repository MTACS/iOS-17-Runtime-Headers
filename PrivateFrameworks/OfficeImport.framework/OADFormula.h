
@interface OADFormula : NSObject {
    struct OADFormulaArg { 
        int type; 
        int value; 
    }  mArgs;
    NSString * mName;
    int  mType;
}

- (void).cxx_destruct;
- (struct OADFormulaArg { int x1; int x2; })argAtIndex:(unsigned int)arg1;
- (id)description;
- (id)initWithType:(int)arg1 arg0:(struct OADFormulaArg { int x1; int x2; })arg2 arg1:(struct OADFormulaArg { int x1; int x2; })arg3 arg2:(struct OADFormulaArg { int x1; int x2; })arg4;
- (id)name;
- (void)setName:(id)arg1;
- (int)type;

@end
