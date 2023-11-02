
@interface TLKMultilineText : TLKObject {
    unsigned long long  _maxLines;
    NSString * _text;
}

@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, retain) NSString *text;

+ (id)textWithString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)maxLines;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
