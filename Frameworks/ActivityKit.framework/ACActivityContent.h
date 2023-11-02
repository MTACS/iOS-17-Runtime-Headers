
@interface ACActivityContent : NSObject <NSCopying> {
    NSData * _contentData;
    double  _relevanceScore;
    NSDate * _staleDate;
}

@property (nonatomic, copy) NSData *contentData;
@property (nonatomic) double relevanceScore;
@property (nonatomic, copy) NSDate *staleDate;

- (void).cxx_destruct;
- (id)contentData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentData:(id)arg1 staleDate:(id)arg2 relevanceScore:(double)arg3;
- (double)relevanceScore;
- (void)setContentData:(id)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setStaleDate:(id)arg1;
- (id)staleDate;

@end
