
@interface TLKFormattedText : TLKFormattedTextItem {
    long long  _encapsulationStyle;
    unsigned long long  _maxLines;
    NSString * _string;
    long long  _verticalTextAlignment;
}

@property (nonatomic) long long encapsulationStyle;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) long long verticalTextAlignment;

+ (id)formattedTextWithString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (long long)encapsulationStyle;
- (bool)hasContent;
- (unsigned long long)maxLines;
- (void)setEncapsulationStyle:(long long)arg1;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (void)setVerticalTextAlignment:(long long)arg1;
- (id)string;
- (long long)verticalTextAlignment;

@end
