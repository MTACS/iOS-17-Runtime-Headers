
@interface HFLiteralLocalizableStringKey : HFLocalizableStringKey {
    NSString * _localizedString;
}

@property (nonatomic, readonly) NSString *localizedString;

- (void).cxx_destruct;
- (id)initWithLocalizedString:(id)arg1;
- (id)localizedString;
- (id)localizedStringWithArgumentBlock:(id /* block */)arg1;

@end
