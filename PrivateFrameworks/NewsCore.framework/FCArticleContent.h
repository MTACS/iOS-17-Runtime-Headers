
@interface FCArticleContent : NSObject {
    FCANFContent * _anfContent;
    NSString * _articleID;
    unsigned long long  _contentType;
    FCWebContent * _webContent;
}

@property (nonatomic, retain) FCANFContent *anfContent;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, retain) FCWebContent *webContent;

- (void).cxx_destruct;
- (id)anfContent;
- (id)articleID;
- (unsigned long long)contentType;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1 anfContent:(id)arg2;
- (id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2;
- (id)initWithArticleID:(id)arg1 webContent:(id)arg2;
- (id)initWithContext:(id)arg1 articleRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setAnfContent:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setWebContent:(id)arg1;
- (id)webContent;

@end
