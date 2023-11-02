
@interface PKPaymentSetupProductSection : NSObject {
    NSArray * _categories;
    NSString * _localizedTitle;
}

@property (nonatomic, retain) NSArray *categories;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)categories;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)localizedTitle;
- (void)setCategories:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
