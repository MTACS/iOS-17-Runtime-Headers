
@interface MFStringAccumulator : NSObject {
    NSString * _immutable;
    NSMutableString * _mutable;
}

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (id)string;

@end
