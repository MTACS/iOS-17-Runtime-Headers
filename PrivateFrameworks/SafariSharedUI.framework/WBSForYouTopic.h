
@interface WBSForYouTopic : NSObject {
    NSArray * _associatedTopics;
    NSString * _identifier;
    NSDate * _relevancyDate;
    unsigned long long  _source;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *associatedTopics;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *relevancyDate;
@property (nonatomic) unsigned long long source;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)associatedTopics;
- (id)identifier;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 relevancyDate:(id)arg3 source:(unsigned long long)arg4;
- (id)relevancyDate;
- (void)setAssociatedTopics:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;
- (id)title;

@end
