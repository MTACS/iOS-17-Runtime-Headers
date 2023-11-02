
@interface BCSCopyActionPickerItem : BCSActionPickerItem {
    NSString * _textToCopy;
    NSURL * _urlToCopy;
}

@property (nonatomic, readonly, copy) NSString *textToCopy;
@property (nonatomic, readonly, copy) NSURL *urlToCopy;

- (void).cxx_destruct;
- (bool)canGroupInSubmenu;
- (id)icon;
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;
- (id)initWithAction:(id)arg1 urlToCopy:(id)arg2;
- (bool)isCopyActionItem;
- (void)performActionWithFBOptions:(id)arg1;
- (id)textToCopy;
- (id)urlToCopy;

@end
