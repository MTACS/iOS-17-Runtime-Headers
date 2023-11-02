
@interface SFLocalSearchResult : SFSearchResult {
    SFText * _title;
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)initWithCompletionMatch:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
