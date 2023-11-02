
@interface _CPSearchSuggestionForFeedback : PBCodable <NSSecureCoding, _CPSearchSuggestionForFeedback> {
    NSString * _fbr;
    NSString * _identifier;
    NSString * _query;
    double  _score;
    NSString * _suggestion;
    NSString * _topicIdentifier;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)fbr;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setFbr:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (id)suggestion;
- (id)topicIdentifier;
- (int)type;
- (void)writeTo:(id)arg1;

@end
