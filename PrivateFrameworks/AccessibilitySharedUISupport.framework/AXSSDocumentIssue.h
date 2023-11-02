
@interface AXSSDocumentIssue : NSObject {
    bool  _autoMatchSuggestionAttributes;
    unsigned long long  _kind;
    AXSSDocumentNode * _node;
    NSString * _note;
    NSAttributedString * _offendingText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _severity;
    NSArray * _suggestions;
}

@property (nonatomic) bool autoMatchSuggestionAttributes;
@property (nonatomic) unsigned long long kind;
@property (nonatomic, retain) AXSSDocumentNode *node;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSAttributedString *offendingText;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) long long severity;
@property (nonatomic, copy) NSArray *suggestions;

- (void).cxx_destruct;
- (void)_updateSuggestionStyleIfNeeded;
- (bool)autoMatchSuggestionAttributes;
- (id)description;
- (id)init;
- (unsigned long long)kind;
- (id)node;
- (id)note;
- (id)offendingText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAutoMatchSuggestionAttributes:(bool)arg1;
- (void)setKind:(unsigned long long)arg1;
- (void)setNode:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setOffendingText:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSeverity:(long long)arg1;
- (void)setSuggestions:(id)arg1;
- (long long)severity;
- (id)suggestions;

@end
