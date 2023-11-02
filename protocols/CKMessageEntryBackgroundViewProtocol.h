
@protocol CKMessageEntryBackgroundViewProtocol <NSObject, CKMessageEntryViewStyleProtocol>

@required

- (NSString *)backdropGroupName;
- (UITraitCollection *)entryViewTraitCollection;
- (UIColor *)inputAccessoryViewBackdropColor;
- (NSArray *)inputAccessoryViewBackdropEffects;
- (void)setBackdropGroupName:(NSString *)arg1;
- (void)setEntryViewTraitCollection:(UITraitCollection *)arg1;

@end
