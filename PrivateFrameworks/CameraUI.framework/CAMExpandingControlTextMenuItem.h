
@interface CAMExpandingControlTextMenuItem : CAMExpandingControlMenuItem {
    NSString * _titleText;
}

@property (nonatomic, readonly) NSString *titleText;

+ (id)menuItemWithState:(id)arg1 titleText:(id)arg2 subtitle:(id)arg3 selectedSubtitle:(id)arg4 configuration:(id)arg5;

- (void).cxx_destruct;
- (bool)isEqualToItem:(id)arg1;
- (id)titleText;

@end
