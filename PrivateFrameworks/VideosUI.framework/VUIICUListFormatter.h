
@interface VUIICUListFormatter : NSListFormatter {
    NSString * _style;
}

@property (nonatomic, copy) NSString *style;

+ (id)localizedStringByJoiningStrings:(id)arg1;
+ (id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2;

- (void).cxx_destruct;
- (id)_stringFromStringArray:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 style:(id)arg2;
- (void)setStyle:(id)arg1;
- (id)style;

@end
