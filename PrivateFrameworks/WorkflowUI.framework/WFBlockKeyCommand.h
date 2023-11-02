
@interface WFBlockKeyCommand : UIKeyCommand {
    id /* block */  _block;
}

@property (nonatomic, readonly) id /* block */ block;

+ (id)commandWithTitle:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)block;

@end
