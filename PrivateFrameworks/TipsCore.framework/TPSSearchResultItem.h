
@interface TPSSearchResultItem : NSObject <NSSecureCoding> {
    void body;
    void collectionIdentifier;
    void contentType;
    void correlationIdentifier;
    void documentIdentifier;
    void relevance;
    void title;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *documentIdentifier;
@property (nonatomic) double relevance;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (id)collectionIdentifier;
- (id)contentType;
- (id)correlationIdentifier;
- (id)description;
- (id)documentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 collectionIdentifier:(id)arg2;
- (double)relevance;
- (void)setBody:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setRelevance:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
