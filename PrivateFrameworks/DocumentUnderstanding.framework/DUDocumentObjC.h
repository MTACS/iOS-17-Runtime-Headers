
@interface DUDocumentObjC : NSObject {
    _TtC21DocumentUnderstanding13DURawDocument * _underlyingDocument;
}

@property (nonatomic, copy) NSString *abstract;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic, copy) DUDocumentHTMLDataObjC *documentHTMLData;
@property (nonatomic, copy) NSArray *documentUIElements;
@property (nonatomic, copy) NSString *headline;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *inLanguage;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSURL *significantLink;
@property (nonatomic, copy) NSString *subHeadline;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSURL *thumbnailUrl;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (id)abstract;
- (id)comment;
- (id)creator;
- (id)dateCreated;
- (id)dateModified;
- (id)documentHTMLData;
- (id)documentUIElements;
- (id)headline;
- (id)identifier;
- (id)inLanguage;
- (id)init;
- (id)keywords;
- (void)setAbstract:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateModified:(id)arg1;
- (void)setDocumentHTMLData:(id)arg1;
- (void)setDocumentUIElements:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInLanguage:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setSignificantLink:(id)arg1;
- (void)setSubHeadline:(id)arg1;
- (void)setText:(id)arg1;
- (void)setThumbnailUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)significantLink;
- (id)subHeadline;
- (id)text;
- (id)thumbnailUrl;
- (id)url;
- (id)version;

@end
