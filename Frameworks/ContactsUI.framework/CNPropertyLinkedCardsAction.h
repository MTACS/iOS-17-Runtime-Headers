
@interface CNPropertyLinkedCardsAction : CNPropertyAction {
    CNContactContentViewController * _contactController;
    <CNContactContentViewControllerDelegate> * _contactDelegate;
    CNMutableContact * _linkedContact;
}

@property (retain) CNContactContentViewController *contactController;
@property <CNContactContentViewControllerDelegate> *contactDelegate;
@property (retain) CNMutableContact *linkedContact;

- (void).cxx_destruct;
- (id)contactController;
- (id)contactDelegate;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)linkedContact;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)setContactController:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setLinkedContact:(id)arg1;
- (void)setPreferredForImage;
- (void)setPreferredForName;

@end
