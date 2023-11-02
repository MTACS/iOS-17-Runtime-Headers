
@interface ICAutoCompleteSuggestionsItem : NSObject {
    NSString * _displayText;
    UIImage * _iconImage;
    bool  _isCreationSuggestion;
    bool  _isEmptyPlaceholder;
    bool  _isSectionHeader;
    NSString * _parentNoteIdentifier;
    NSObject * _representedObject;
    NSString * _rightText;
    NSString * _shortText;
    NSString * _uuidString;
}

@property (nonatomic, readonly, copy) NSString *displayText;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) bool isCreationSuggestion;
@property (nonatomic, readonly) bool isEmptyPlaceholder;
@property (nonatomic, readonly) bool isSectionHeader;
@property (nonatomic, readonly, copy) NSString *parentNoteIdentifier;
@property (nonatomic, readonly) NSObject *representedObject;
@property (nonatomic, readonly, copy) NSString *rightText;
@property (nonatomic, readonly, copy) NSString *shortText;
@property (nonatomic, readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)displayText;
- (id)iconImage;
- (id)initWithDisplayText:(id)arg1 isSectionHeader:(bool)arg2;
- (id)initWithDisplayText:(id)arg1 representedObject:(id)arg2 isEmptyPlaceholder:(bool)arg3;
- (id)initWithDisplayText:(id)arg1 shortText:(id)arg2 representedObject:(id)arg3;
- (id)initWithDisplayText:(id)arg1 shortText:(id)arg2 rightText:(id)arg3 uuidString:(id)arg4 isEmptyPlaceholder:(bool)arg5 isSectionHeader:(bool)arg6 isCreationSuggestion:(bool)arg7 iconImage:(id)arg8 parentNoteIdentifier:(id)arg9 representedObject:(id)arg10;
- (id)initWithDisplayText:(id)arg1 shortText:(id)arg2 uuidString:(id)arg3 iconImage:(id)arg4;
- (id)initWithDisplayText:(id)arg1 shortText:(id)arg2 uuidString:(id)arg3 isEmptyPlaceholder:(bool)arg4 iconImage:(id)arg5 representedObject:(id)arg6;
- (id)initWithDisplayText:(id)arg1 shortText:(id)arg2 uuidString:(id)arg3 isEmptyPlaceholder:(bool)arg4 isSectionHeader:(bool)arg5 iconImage:(id)arg6 representedObject:(id)arg7;
- (bool)isCreationSuggestion;
- (bool)isEmptyPlaceholder;
- (bool)isSectionHeader;
- (id)parentNoteIdentifier;
- (id)representedObject;
- (id)rightText;
- (id)shortText;
- (id)uuidString;

@end
