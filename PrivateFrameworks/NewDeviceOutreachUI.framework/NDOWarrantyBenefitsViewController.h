
@interface NDOWarrantyBenefitsViewController : OBTextWelcomeController {
    NDOWarranty * _warranty;
}

@property NDOWarranty *warranty;

- (void).cxx_destruct;
- (void)donePressed:(id)arg1;
- (id)initWithWarranty:(id)arg1;
- (void)loadView;
- (void)setWarranty:(id)arg1;
- (id)warranty;

@end
