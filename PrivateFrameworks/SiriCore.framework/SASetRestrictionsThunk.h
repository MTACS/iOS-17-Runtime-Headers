
@interface SASetRestrictionsThunk : SASetRestrictions {
    id /* block */  _thunk;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithThunk:(id /* block */)arg1;
- (void)siriCore_invokeThunk;

@end
