
@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent> {
    bool  _usesCompactWidth;
    UIView * _view;
    <SearchUIFeedbackDelegate> * feedbackDelegate;
    SearchUIDetailedRowModel * rowModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) bool shouldCenterAlignToTitle;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (nonatomic) bool usesCompactWidth;
@property (nonatomic, retain) UIView *view;

+ (Class)leadingViewClassForRowModel:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)feedbackDelegate;
- (void)hide;
- (id)imageView;
- (id)init;
- (id)rowModel;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setUsesCompactWidth:(bool)arg1;
- (void)setView:(id)arg1;
- (id)setupView;
- (bool)shouldCenterAlignToTitle;
- (bool)shouldVerticallyCenter;
- (void)tlk_updateForAppearance:(id)arg1;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (bool)usesCompactWidth;
- (id)view;

@end
