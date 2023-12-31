
@interface MinMaxIntFormatter : APFormatter {
    long long  _maximum;
    long long  _minimum;
}

+ (id)formatterForMin:(long long)arg1 max:(long long)arg2;

- (id)initWithMin:(long long)arg1 max:(long long)arg2;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (long long)maximum;
- (long long)minimum;
- (void)setMaximum:(long long)arg1;
- (void)setMinimum:(long long)arg1;

@end
