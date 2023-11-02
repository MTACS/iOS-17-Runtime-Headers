
@interface PXDebugStringValue : PXDebugValue {
    unsigned long long  _highlightStyle;
    NSString * _string;
}

@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (unsigned long long)highlightStyle;
- (id)initWithLabel:(id)arg1 boolValue:(bool)arg2 positiveValue:(bool)arg3 positiveHighlighted:(bool)arg4 negativeHighlighted:(bool)arg5;
- (id)initWithLabel:(id)arg1 doubleValue:(double)arg2;
- (id)initWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (id)initWithLabel:(id)arg1 integerValue:(long long)arg2;
- (id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3;
- (id)string;

@end
