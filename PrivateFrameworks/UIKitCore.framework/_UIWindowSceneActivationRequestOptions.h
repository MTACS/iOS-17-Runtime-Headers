
@interface _UIWindowSceneActivationRequestOptions : UIWindowSceneActivationRequestOptions

@property (nonatomic) unsigned long long preferredPresentationStyle;
@property (nonatomic) unsigned long long preferredSizeCategory;

- (unsigned long long)preferredPresentationStyle;
- (unsigned long long)preferredSizeCategory;
- (void)setPreferredPresentationStyle:(unsigned long long)arg1;
- (void)setPreferredSizeCategory:(unsigned long long)arg1;

@end
