
@interface PXSuggesterDebugCollectionItem : NSObject {
    NSDate * _date;
    NSString * _description;
    NSDictionary * _info;
    NSString * _name;
    PHSuggestion * _suggestion;
}

@property (readonly) NSDate *date;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *info;
@property (readonly) bool isInvalid;
@property (readonly) NSString *name;
@property (readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)info;
- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;
- (bool)isInvalid;
- (id)name;
- (id)suggestion;

@end
