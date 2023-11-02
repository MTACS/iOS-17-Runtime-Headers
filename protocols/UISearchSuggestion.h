
@protocol UISearchSuggestion <NSObject>

@required

- (NSAttributedString *)localizedAttributedSuggestion;
- (NSString *)localizedSuggestion;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;

@optional

- (UIImage *)iconImage;
- (NSString *)localizedDescription;

@end
