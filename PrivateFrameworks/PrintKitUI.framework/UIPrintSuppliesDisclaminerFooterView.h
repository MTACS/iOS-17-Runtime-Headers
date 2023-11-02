
@interface UIPrintSuppliesDisclaminerFooterView : UITableViewHeaderFooterView {
    UILabel * _disclaimerLabel;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _suppliesInfoLinkRange;
    NSURL * _suppliesInfoURL;
}

@property (nonatomic, retain) UILabel *disclaimerLabel;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } suppliesInfoLinkRange;
@property (nonatomic, retain) NSURL *suppliesInfoURL;

- (void).cxx_destruct;
- (id)disclaimerLabel;
- (void)handleTapOnLabel:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)messageText;
- (void)prepareForReuse;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setSuppliesInfoLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSuppliesInfoURL:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })suppliesInfoLinkRange;
- (id)suppliesInfoURL;
- (void)updateDisclaimerTextWithInfoURL:(id)arg1 tintColor:(id)arg2;

@end
