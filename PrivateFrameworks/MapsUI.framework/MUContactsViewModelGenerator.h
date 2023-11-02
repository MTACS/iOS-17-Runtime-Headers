
@interface MUContactsViewModelGenerator : NSObject {
    CNContact * _contact;
}

+ (id)symbolImageForAddressItem;

- (void).cxx_destruct;
- (id)headerLabelFromAddress:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)sectionViewsFromContentViews:(id)arg1 headerLabels:(id)arg2;
- (id)viewModelForAddress:(id)arg1;

@end
