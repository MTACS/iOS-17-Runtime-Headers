
@interface TPSUserGuideTopic : NSObject {
    void body;
    void bookId;
    void productId;
    void title;
    void topicId;
    void version;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *bookId;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, readonly) NSURL *supportSiteURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topicId;
@property (nonatomic, copy) NSString *version;

+ (bool)isValidIdentifier:(id)arg1;
+ (id)uti;

- (void).cxx_destruct;
- (id)body;
- (id)bookId;
- (id)identifier;
- (id)init;
- (id)initWithProductIdentifier:(id)arg1 bookIdentifier:(id)arg2 topicIdentifier:(id)arg3 version:(id)arg4;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1;
- (id)productId;
- (id)searchableItemUniqueIdentifierWith:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBookId:(id)arg1;
- (void)setProductId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicId:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)supportSiteURL;
- (id)title;
- (id)topicId;
- (id)version;

@end
