
@interface ICNoteEditorDateView : UIView <ICNoteDateFormatterControllerDelegate> {
    double  _cachedHeight;
    ICSelectorDelayer * _dateViewLayoutUpdateDelayer;
    double  _dateViewMaximumWidthOnPreviousTextChange;
    ICNoteDateFormatterController * _formatterController;
    UILabel * _label;
    UIImageView * _lockImageView;
    ICNote * _note;
}

@property (nonatomic) double cachedHeight;
@property (nonatomic, retain) ICSelectorDelayer *dateViewLayoutUpdateDelayer;
@property (nonatomic) double dateViewMaximumWidthOnPreviousTextChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, retain) ICNoteDateFormatterController *formatterController;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *label;
@property (nonatomic) UIImageView *lockImageView;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, readonly) double preferredHeight;
@property (readonly) Class superclass;

+ (id)newDateView;

- (void).cxx_destruct;
- (bool)_accessibilityScrollToVisible;
- (void)_updateLayout;
- (id)accessibilityContainer;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (void)awakeFromNib;
- (double)cachedHeight;
- (void)contentSizeCategoryDidChange;
- (id)dateViewAttributes;
- (void)dateViewDidTap:(id)arg1;
- (id)dateViewLayoutUpdateDelayer;
- (double)dateViewMaximumWidth;
- (double)dateViewMaximumWidthOnPreviousTextChange;
- (void)dealloc;
- (id)font;
- (void)formatter:(id)arg1 iconHiddenDidChange:(bool)arg2;
- (void)formatter:(id)arg1 iconImageDidChange:(id)arg2;
- (void)formatter:(id)arg1 textDidChange:(id)arg2;
- (id)formatterController;
- (bool)iconHidden;
- (bool)isAccessibilityElement;
- (id)label;
- (void)layoutSubviews;
- (id)lockImageView;
- (id)note;
- (double)preferredHeight;
- (void)reset;
- (void)setCachedHeight:(double)arg1;
- (void)setDateViewLayoutUpdateDelayer:(id)arg1;
- (void)setDateViewMaximumWidthOnPreviousTextChange:(double)arg1;
- (void)setFormatterController:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLockImageView:(id)arg1;
- (void)setNote:(id)arg1;
- (void)updateLayoutIfNecessary;

@end
