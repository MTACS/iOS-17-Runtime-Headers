
@interface PKPaymentSetupProductsSectionListSection : NSObject {
    NSString * _identifier;
    NSMutableArray * _sectionListItems;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSMutableArray *sectionListItems;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)sectionListItems;
- (void)setIdentifier:(id)arg1;
- (void)setSectionListItems:(id)arg1;

@end
