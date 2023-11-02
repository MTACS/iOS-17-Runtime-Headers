
@interface PXDebugValueList : NSObject <NSFastEnumeration> {
    NSMutableArray * _debugValues;
}

@property (nonatomic, readonly) NSMutableArray *debugValues;

- (void).cxx_destruct;
- (void)addValueWithLabel:(id)arg1;
- (void)addValueWithLabel:(id)arg1 boolValue:(bool)arg2;
- (void)addValueWithLabel:(id)arg1 boolValue:(bool)arg2 positiveValue:(bool)arg3 positiveHighlighted:(bool)arg4 negativeHighlighted:(bool)arg5;
- (void)addValueWithLabel:(id)arg1 doubleValue:(double)arg2;
- (void)addValueWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (void)addValueWithLabel:(id)arg1 integerValue:(long long)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 highlightStyle:(unsigned long long)arg3;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugValues;
- (id)init;

@end
