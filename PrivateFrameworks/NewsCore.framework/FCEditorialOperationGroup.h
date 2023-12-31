
@interface FCEditorialOperationGroup : NSObject {
    NSArray * _headlines;
    NSDate * _publishDate;
    <FCSectionProviding> * _section;
}

@property (nonatomic, retain) NSArray *headlines;
@property (nonatomic, retain) NSDate *publishDate;
@property (nonatomic, retain) <FCSectionProviding> *section;

- (void).cxx_destruct;
- (id)headlines;
- (id)publishDate;
- (id)section;
- (void)setHeadlines:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setSection:(id)arg1;

@end
