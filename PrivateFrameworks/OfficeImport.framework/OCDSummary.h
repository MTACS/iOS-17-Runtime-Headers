
@interface OCDSummary : NSObject {
    NSString * _company;
    NSString * _subject;
    NSString * mAuthor;
    NSString * mComments;
    NSString * mHyperlinkBase;
    NSString * mKeywords;
    NSString * mTitle;
}

@property (retain) NSString *company;
@property (retain) NSString *subject;

- (void).cxx_destruct;
- (id)author;
- (id)comments;
- (id)company;
- (id)hyperlinkBase;
- (id)keywords;
- (void)setAuthor:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setHyperlinkBase:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subject;
- (id)title;

@end
