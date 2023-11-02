
@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView {
    NSString * _title;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _titleLayoutMargins;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } titleLayoutMargins;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1;
- (void)setTitleLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)title;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })titleLayoutMargins;
- (void)updateConfigurationUsingState:(id)arg1;

@end
