
@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter * mNumberFormatter;
}

- (void)dealloc;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)init;
- (id)stringForObjectValue:(id)arg1;

@end