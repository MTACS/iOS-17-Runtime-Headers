
@interface REMLSentimentAnalyzer : NSObject <NSCopying> {
    REContentRanker * _contentRanker;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentRanker:(id)arg1;
- (id)sentimentForText:(id)arg1;
- (id)sentimentForTokens:(id)arg1;

@end
