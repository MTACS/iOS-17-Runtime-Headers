
@interface ACTTransposeKeyTaps : ACTUserAction {
    <ACTUserAction> * _firstTap;
    <ACTUserAction> * _secondTap;
}

@property (nonatomic, readonly) <ACTUserAction> *firstTap;
@property (nonatomic, readonly) <ACTUserAction> *secondTap;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)description;
- (id)firstTap;
- (id)initWithFirstTap:(id)arg1 secondTap:(id)arg2;
- (id)secondTap;
- (id)shortDescription;

@end
