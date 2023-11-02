
@interface PPTopicDissectorGuardedData : NSObject {
    NSMutableArray * namedEntities;
    bool  stop;
    NSMutableArray * topics;
    NSMutableArray * topicsExactMatchesInSourceText;
}

- (void).cxx_destruct;

@end
