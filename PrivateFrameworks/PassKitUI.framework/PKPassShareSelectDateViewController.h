
@interface PKPassShareSelectDateViewController : PKPaymentSetupOptionsViewController <PKPassShareSelectDateSectionControllerDelegate> {
    id /* block */  _dateChangeHandler;
    PKPassShareSelectDateSectionController * _sectionController;
}

@property (nonatomic, copy) id /* block */ dateChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)dateChangeHandler;
- (void)didUpdateDate:(id)arg1;
- (id)initWithDate:(id)arg1 minimumDate:(id)arg2 maximumDate:(id)arg3 title:(id)arg4;
- (void)reloadDataAnimated:(bool)arg1;
- (void)setDateChangeHandler:(id /* block */)arg1;

@end
