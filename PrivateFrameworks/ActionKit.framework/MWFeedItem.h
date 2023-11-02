
@interface MWFeedItem : NSObject <NSCoding> {
    NSString * author;
    NSString * content;
    NSDate * date;
    NSArray * enclosures;
    NSString * identifier;
    NSString * link;
    NSString * summary;
    NSString * title;
    NSDate * updated;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSArray *enclosures;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDate *updated;

- (void).cxx_destruct;
- (id)asWFArticle;
- (id)author;
- (id)content;
- (id)date;
- (id)description;
- (id)enclosures;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)link;
- (id)mainImageURL;
- (void)setAuthor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEnclosures:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)summary;
- (id)title;
- (id)updated;

@end
