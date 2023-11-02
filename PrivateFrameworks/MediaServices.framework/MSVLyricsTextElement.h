
@interface MSVLyricsTextElement : MSVLyricsElement {
    bool  _keepParentheses;
    NSAttributedString * _lyricsText;
}

@property (nonatomic) bool keepParentheses;
@property (nonatomic, copy) NSAttributedString *lyricsText;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)keepParentheses;
- (id)lyricsText;
- (void)setKeepParentheses:(bool)arg1;
- (void)setLyricsText:(id)arg1;

@end
