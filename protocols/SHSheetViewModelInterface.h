
@protocol SHSheetViewModelInterface <NSObject>

@required

- (NSArray *)activities;
- (NSString *)customOptionsTitle;
- (NSArray *)metadataValues;
- (NSArray *)peopleSuggestions;
- (NSArray *)restrictedActivityTypes;
- (bool)showOptions;

@end
