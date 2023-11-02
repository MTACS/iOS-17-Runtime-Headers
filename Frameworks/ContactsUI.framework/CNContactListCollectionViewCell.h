
@interface CNContactListCollectionViewCell : UICollectionViewListCell {
    bool  _allowsMultiSelectContextMenus;
    bool  _allowsMultiSelection;
    CNContact * _contact;
    CNContactFormatter * _contactFormatter;
    CNContactListStyleApplier * _contactListStyleApplier;
    CNContactMatchInfo * _contactMatchInfo;
    bool  _hasBeenDisplayed;
    bool  _isEmergencyContact;
    bool  _isMeCard;
    <CNCancelable> * _summaryCancelationToken;
}

@property (nonatomic) bool allowsMultiSelectContextMenus;
@property (nonatomic) bool allowsMultiSelection;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic, retain) CNContactMatchInfo *contactMatchInfo;
@property (nonatomic) bool hasBeenDisplayed;
@property (nonatomic) bool isEmergencyContact;
@property (nonatomic) bool isMeCard;
@property (nonatomic, retain) <CNCancelable> *summaryCancelationToken;

- (void).cxx_destruct;
- (bool)allowsMultiSelectContextMenus;
- (bool)allowsMultiSelection;
- (void)applyAccessories;
- (void)cancelAsyncOperations;
- (id)contact;
- (id)contactFormatter;
- (id)contactListStyleApplier;
- (id)contactMatchInfo;
- (void)dealloc;
- (bool)hasBeenDisplayed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmergencyContact;
- (bool)isMeCard;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAllowsMultiSelectContextMenus:(bool)arg1;
- (void)setAllowsMultiSelection:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContactListStyleApplier:(id)arg1;
- (void)setContactMatchInfo:(id)arg1;
- (void)setContactMatchInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setHasBeenDisplayed:(bool)arg1;
- (void)setIsEmergencyContact:(bool)arg1;
- (void)setIsMeCard:(bool)arg1;
- (void)setSubtitleAttributedText:(id)arg1;
- (void)setSummaryCancelationToken:(id)arg1;
- (id)summaryCancelationToken;

@end
