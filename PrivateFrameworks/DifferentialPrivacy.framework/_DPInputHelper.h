
@interface _DPInputHelper : NSObject {
    NSNumberFormatter * _fmt;
}

@property (nonatomic, readonly) NSNumberFormatter *fmt;

- (void).cxx_destruct;
- (id)fmt;
- (id)init;
- (id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg1;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1 encoding:(unsigned long long)arg2;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1 separatedBy:(id)arg2 encoding:(unsigned long long)arg3;
- (id)numberFromString:(id)arg1;
- (id)numbersFromFileAtPath:(id)arg1;

@end
