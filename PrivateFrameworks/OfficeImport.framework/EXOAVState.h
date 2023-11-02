
@interface EXOAVState : OAVReadState {
    EXReadState * mEXReadState;
}

@property (readonly) EXReadState *exState;

- (void).cxx_destruct;
- (id)exState;
- (id)initWithEXReadState:(id)arg1 packagePart:(id)arg2;

@end
