
@interface CKMentionAutoCompleteAttribute : NSObject {
    NSString * _displayText;
    CKMentionEntityNode * _mentionEntityNode;
    NSString * _originalText;
}

@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, retain) CKMentionEntityNode *mentionEntityNode;
@property (nonatomic, copy) NSString *originalText;

- (void).cxx_destruct;
- (id)displayText;
- (id)initWithMentionEntityNode:(id)arg1 originalText:(id)arg2 displayText:(id)arg3;
- (id)mentionEntityNode;
- (id)originalText;
- (void)setDisplayText:(id)arg1;
- (void)setMentionEntityNode:(id)arg1;
- (void)setOriginalText:(id)arg1;

@end
