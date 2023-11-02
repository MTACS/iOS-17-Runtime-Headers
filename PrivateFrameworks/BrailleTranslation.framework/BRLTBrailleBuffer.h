
@interface BRLTBrailleBuffer : NSObject <NSCopying> {
    BRLTBrailleString * _brailleString;
    unsigned long long  _cursor;
}

@property (nonatomic, readonly) BRLTBrailleString *brailleString;
@property (nonatomic) unsigned long long cursor;

- (void).cxx_destruct;
- (id)brailleString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cursor;
- (void)deleteBrailleChar;
- (id)description;
- (id)init;
- (id)initWithBrailleString:(id)arg1;
- (void)insertBrailleChar:(id)arg1;
- (void)insertBrailleChar:(id)arg1 modifiers:(id)arg2 inputMode:(unsigned long long)arg3;
- (void)setCursor:(unsigned long long)arg1;

@end
