
@interface PXExistingSuggestionsDebugCollectionItem : NSObject {
    NSString * _description;
    NSString * _name;
    PHSuggestion * _suggestion;
}

@property (readonly) NSString *description;
@property (readonly) NSString *name;
@property (readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSuggestion:(id)arg1;
- (id)name;
- (id)suggestion;

@end
