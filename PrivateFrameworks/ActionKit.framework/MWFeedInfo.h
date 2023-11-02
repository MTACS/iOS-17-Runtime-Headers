
@interface MWFeedInfo : NSObject <NSCoding> {
    NSString * link;
    NSString * summary;
    NSString * title;
    NSURL * url;
}

@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)summary;
- (id)title;
- (id)url;

@end
