
@interface PKActivityItemSource : NSObject <UIActivityItemSource> {
    LPImage * _icon;
    UIImage * _iconImage;
    NSURL * _iconURL;
    NSString * _subtitle;
    NSString * _title;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;

+ (id)actionableItemWithValue:(id)arg1;
+ (id)placeholderURLItemWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
+ (id)placeholderURLItemWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconPlaceholder:(id)arg4;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3 value:(id)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconPlaceholder:(id)arg4 value:(id)arg5;
- (void)setValue:(id)arg1;
- (id)value;

@end
