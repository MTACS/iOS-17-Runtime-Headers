
@interface MUPlaceSectionHeaderViewModel : NSObject {
    UIMenu * _seeMoreButtonMenu;
    NSString * _seeMoreButtonText;
    SEL  _selector;
    NSString * _subtitleString;
    id  _target;
    NSString * _titleString;
}

@property (nonatomic, retain) UIMenu *seeMoreButtonMenu;
@property (nonatomic, retain) NSString *seeMoreButtonText;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) NSString *subtitleString;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) NSString *titleString;

+ (id)viewModelForTitle:(id)arg1 attribution:(id)arg2 target:(id)arg3 action:(SEL)arg4;

- (void).cxx_destruct;
- (id)initWithTitleString:(id)arg1;
- (id)initWithTitleString:(id)arg1 showSeeMore:(bool)arg2;
- (id)initWithTitleString:(id)arg1 subtitleString:(id)arg2 showSeeMore:(bool)arg3;
- (id)seeMoreButtonMenu;
- (id)seeMoreButtonText;
- (SEL)selector;
- (void)setSeeMoreButtonMenu:(id)arg1;
- (void)setSeeMoreButtonText:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (id)subtitleString;
- (id)target;
- (id)titleString;

@end
