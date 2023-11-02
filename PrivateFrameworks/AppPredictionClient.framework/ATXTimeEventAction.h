
@interface ATXTimeEventAction : NSObject <NSSecureCoding> {
    NSString * _colorName;
    NSString * _compactTitle;
    NSString * _identifier;
    unsigned long long  _options;
    NSString * _symbolName;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *colorName;
@property (nonatomic, readonly) NSString *compactTitle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorName;
- (id)compactTitle;
- (id)compactTitleUsingETAIfPossibleWithMinutes:(double)arg1 style:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 compactTitle:(id)arg2 identifier:(id)arg3 symbolName:(id)arg4 colorName:(id)arg5 options:(unsigned long long)arg6;
- (unsigned long long)options;
- (id)symbolName;
- (id)title;

@end
