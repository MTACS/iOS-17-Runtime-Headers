
@interface SmartReplies.SRSmartRepliesActionSuggestion : SmartReplies.SRSmartRepliesSuggestion {
    void attribution;
    void isRichSuggestion;
    void metadata;
    void type;
}

@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) bool isRichSuggestion;
@property (nonatomic, readonly) _TtC12SmartReplies28SRSmartRepliesActionMetadata *metadata;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)attribution;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 isDynamicSuggestion:(bool)arg2;
- (id)initWithType:(long long)arg1 title:(id)arg2 attribution:(id)arg3 isRichSuggestion:(bool)arg4 metadata:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isRichSuggestion;
- (id)metadata;
- (long long)type;

@end
