
@interface INFSentenceTokenWithContext : NSObject {
    INFSentenceContext * _context;
    INFSentenceToken * _originalToken;
    NSString * _placeholderName;
    bool  _resolved;
}

@property (nonatomic, retain) INFSentenceContext *context;
@property (nonatomic, retain) INFSentenceToken *originalToken;
@property (nonatomic, copy) NSString *placeholderName;
@property (getter=isResolved, nonatomic) bool resolved;

+ (id)sentenceResolvedTokenWithOriginalToken:(id)arg1 placeholderName:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)initWithToken:(id)arg1 variableName:(id)arg2;
- (bool)isResolved;
- (id)originalToken;
- (id)placeholderName;
- (void)setContext:(id)arg1;
- (void)setOriginalToken:(id)arg1;
- (void)setPlaceholderName:(id)arg1;
- (void)setResolved:(bool)arg1;

@end
