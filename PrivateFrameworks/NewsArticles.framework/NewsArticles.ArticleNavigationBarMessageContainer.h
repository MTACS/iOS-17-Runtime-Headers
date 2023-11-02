
@interface NewsArticles.ArticleNavigationBarMessageContainer : UIView <NUArticleMessaging> {
    void clipView;
    void defaultView;
    void messageLabel;
    void state;
    void textForArticleMessage;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)showMessage:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
