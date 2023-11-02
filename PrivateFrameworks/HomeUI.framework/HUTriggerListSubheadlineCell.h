
@interface HUTriggerListSubheadlineCell : UITableViewCell <HUCellProtocol, UITextViewDelegate> {
    NSArray * _constraints;
    <HUTriggerListSubheadlineCellDelegate> * _delegate;
    UITextView * _descriptionView;
    HFItem * _item;
    HUGridLayoutOptions * _layoutOptions;
    bool  _respectLayoutMargins;
}

@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerListSubheadlineCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *descriptionView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) bool respectLayoutMargins;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionTextAttributes;
- (id)constraints;
- (id)delegate;
- (id)descriptionView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)layoutOptions;
- (void)prepareForReuse;
- (bool)respectLayoutMargins;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setRespectLayoutMargins:(bool)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (void)updateUIWithDescription:(id)arg1;
- (void)updateUIWithResults:(id)arg1 animation:(bool)arg2;

@end
