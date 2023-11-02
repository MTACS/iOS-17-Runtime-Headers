
@interface ACTSelectPopupVariant : ACTUserAction {
    NSString * _intendedKey;
    double  _timestamp;
}

@property (nonatomic, readonly) NSString *intendedKey;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)description;
- (id)initWithIntendedKey:(id)arg1 timestamp:(double)arg2;
- (id)intendedKey;
- (double)timestamp;

@end
