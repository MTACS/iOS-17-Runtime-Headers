
@interface SROSmartRepliesActionSuggestion : SROSmartRepliesSuggestion {
    _TtC12SmartReplies30SRSmartRepliesActionSuggestion * _underlyingSuggestion;
}

@property (readonly) NSString *attribution;
@property (nonatomic, readonly) bool isRichSuggestion;
@property (nonatomic, readonly) SROSmartRepliesActionMetadata *metadata;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)attribution;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 attribution:(id)arg3 isRichSuggestion:(bool)arg4 metadata:(id)arg5;
- (bool)isDynamicSuggestion;
- (bool)isRichSuggestion;
- (id)metadata;
- (id)title;
- (unsigned long long)type;

@end
