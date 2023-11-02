
@interface _PSPeopleSuggestionsMetricsItemInternal : NSObject {
    void id;
    void model;
    void rank;
    void score;
    void transportBundleId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) _PSPeopleSuggestionsMetricsModelInternal *model;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)id;
- (id)init;
- (id)initWithId:(id)arg1 model:(id)arg2 transportBundleId:(id)arg3 rank:(unsigned char)arg4 score:(double)arg5;
- (bool)isEqual:(id)arg1;
- (id)model;

@end
