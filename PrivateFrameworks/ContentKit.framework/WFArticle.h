
@interface WFArticle : NSObject <NSSecureCoding, WFNaming, WFSerializableContent> {
    NSURL * _URL;
    NSString * _author;
    NSString * _body;
    NSString * _excerpt;
    NSURL * _mainImageURL;
    unsigned long long  _numberOfWords;
    NSDate * _publishedDate;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *author;
@property (nonatomic, readonly, copy) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *excerpt;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *mainImageURL;
@property (nonatomic, readonly) unsigned long long numberOfWords;
@property (nonatomic, readonly, copy) NSDate *publishedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)articleWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;
+ (void)fetchArticleFromURL:(id)arg1 pageHTML:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)mainImageURLFromHTML:(id)arg1;
+ (unsigned long long)numberOfWordsInString:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)summaryOfParagraph:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)author;
- (id)body;
- (void)encodeWithCoder:(id)arg1;
- (id)excerpt;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)mainImageURL;
- (unsigned long long)numberOfWords;
- (id)publishedDate;
- (id)title;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
