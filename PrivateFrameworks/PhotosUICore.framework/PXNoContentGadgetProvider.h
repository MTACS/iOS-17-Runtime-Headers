
@interface PXNoContentGadgetProvider : PXGadgetProvider {
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSArray * _noContentGadgets;
}

@property (nonatomic, copy) NSString *localizedMessage;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSArray *noContentGadgets;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)noContentGadgets;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setNoContentGadgets:(id)arg1;

@end
