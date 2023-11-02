
@interface ATXTimeGlyphPresentation : NSObject <NSSecureCoding> {
    NSString * _colorName;
    unsigned long long  _options;
    NSString * _symbolName;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1 colorName:(id)arg2 title:(id)arg3 options:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTimeGlyphPresentation:(id)arg1;
- (unsigned long long)options;
- (id)symbolName;
- (id)title;

@end
