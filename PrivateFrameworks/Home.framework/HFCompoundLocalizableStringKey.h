
@interface HFCompoundLocalizableStringKey : HFLocalizableStringKey {
    NSString * _format;
    NSMutableArray * _localizableStrings;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic, readonly) NSMutableArray *localizableStrings;

- (void).cxx_destruct;
- (id)format;
- (id)initWithFormat:(id)arg1 localizableStrings:(id)arg2;
- (id)localizableStrings;
- (id)localizedStringWithArgumentBlock:(id /* block */)arg1;
- (void)setFormat:(id)arg1;

@end
