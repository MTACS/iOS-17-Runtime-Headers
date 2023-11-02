
@interface PERotateAction : PEEditAction {
    long long  _rotateDirection;
}

@property (nonatomic) long long rotateDirection;

- (long long)actionType;
- (void)applyToLoadResult:(id)arg1 completion:(id /* block */)arg2;
- (long long)rotateDirection;
- (void)setRotateDirection:(long long)arg1;

@end
