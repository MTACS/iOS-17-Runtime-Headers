
@interface CAMExpandingControlImageMenuItem : CAMExpandingControlMenuItem {
    UIImage * _titleImage;
}

@property (nonatomic, readonly) UIImage *titleImage;

+ (id)menuItemWithState:(id)arg1 titleImage:(id)arg2 subtitle:(id)arg3 selectedSubtitle:(id)arg4 configuration:(id)arg5;

- (void).cxx_destruct;
- (bool)isEqualToItem:(id)arg1;
- (id)titleImage;

@end
