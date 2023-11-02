
@interface SSNumberFormatManager : NSObject {
    NSByteCountFormatter * _byteCountFormatter;
    NSNumberFormatter * _numberFormatter;
}

@property (retain) NSByteCountFormatter *byteCountFormatter;
@property (retain) NSNumberFormatter *numberFormatter;

+ (void)initialize;
+ (id)stringFromByteCount:(long long)arg1;
+ (id)stringFromInt:(int)arg1 withMinimumDigits:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)byteCountFormatter;
- (id)init;
- (id)numberFormatter;
- (void)setByteCountFormatter:(id)arg1;
- (void)setNumberFormatter:(id)arg1;

@end
