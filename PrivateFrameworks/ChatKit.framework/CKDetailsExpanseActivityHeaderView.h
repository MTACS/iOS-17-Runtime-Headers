
@interface CKDetailsExpanseActivityHeaderView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {
    UITextView * _expanseActivityTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *expanseActivityTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)expanseActivityTextView;
- (void)layoutSubviews;
- (void)setExpanseActivityTextView:(id)arg1;

@end
