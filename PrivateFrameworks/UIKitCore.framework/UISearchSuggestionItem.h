
@interface UISearchSuggestionItem : NSObject <UISearchSuggestion> {
    UIImage * _iconImage;
    NSAttributedString * _localizedAttributedSuggestion;
    NSString * _localizedDescription;
    NSString * _localizedSuggestion;
    id  _representedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) NSAttributedString *localizedAttributedSuggestion;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedSuggestion;
@property (nonatomic, retain) id representedObject;
@property (readonly) Class superclass;

+ (id)suggestionWithLocalizedAttributedSuggestion:(id)arg1;
+ (id)suggestionWithLocalizedAttributedSuggestion:(id)arg1 descriptionString:(id)arg2;
+ (id)suggestionWithLocalizedAttributedSuggestion:(id)arg1 descriptionString:(id)arg2 iconImage:(id)arg3;
+ (id)suggestionWithLocalizedSuggestion:(id)arg1;
+ (id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2;
+ (id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2 iconImage:(id)arg3;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)iconImage;
- (id)initWithLocalizedAttributedSuggestion:(id)arg1;
- (id)initWithLocalizedAttributedSuggestion:(id)arg1 localizedDescription:(id)arg2;
- (id)initWithLocalizedAttributedSuggestion:(id)arg1 localizedDescription:(id)arg2 iconImage:(id)arg3;
- (id)initWithLocalizedSuggestion:(id)arg1;
- (id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2;
- (id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2 iconImage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedAttributedSuggestion;
- (id)localizedDescription;
- (id)localizedSuggestion;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;

@end
