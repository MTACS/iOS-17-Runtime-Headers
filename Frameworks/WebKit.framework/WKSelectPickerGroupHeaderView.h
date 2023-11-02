
@interface WKSelectPickerGroupHeaderView : UIView {
    struct RetainPtr<UIImageView> { 
        void *m_ptr; 
    }  _collapseIndicatorView;
    bool  _collapsed;
    struct RetainPtr<UILabel> { 
        void *m_ptr; 
    }  _label;
    long long  _section;
    struct WeakObjCPtr<WKSelectPickerTableViewController> { 
        id m_weakReference; 
    }  _tableViewController;
}

@property (nonatomic, readonly) long long section;

+ (id)preferredFont;
+ (double)preferredHeight;
+ (double)preferredMargin;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didTapHeader:(id)arg1;
- (id)initWithGroupName:(id)arg1 section:(long long)arg2;
- (long long)section;
- (void)setCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)setTableViewController:(id)arg1;

@end
