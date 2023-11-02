
@interface SROSmartRepliesSuggestion : NSObject {
    _TtC12SmartReplies24SRSmartRepliesSuggestion * _underlyingSuggestion;
}

@property (nonatomic, readonly) bool isDynamicSuggestion;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 isDynamicSuggestion:(bool)arg2;
- (bool)isDynamicSuggestion;
- (id)title;

@end
