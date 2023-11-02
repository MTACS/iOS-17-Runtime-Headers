
@interface VKCActionInfoMoreButton : VKCActionInfoButton {
    bool  _isShowingSingleTapMenu;
}

@property (nonatomic) bool isShowingSingleTapMenu;

- (void)_moreButtonAction:(id)arg1;
- (bool)isShowingSingleTapMenu;
- (void)setIsShowingSingleTapMenu:(bool)arg1;

@end
