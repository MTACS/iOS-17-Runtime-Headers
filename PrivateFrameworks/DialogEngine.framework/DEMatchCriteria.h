
@interface DEMatchCriteria : NSObject {
    NSArray * _prefixes;
    NSArray * _suffixes;
}

@property (nonatomic, retain) NSArray *prefixes;
@property (nonatomic, retain) NSArray *suffixes;

+ (id)matchCriteriaFromPb:(const void*)arg1;
+ (void)matchCriteriaToPb:(id)arg1 matchCriteriaPb:(void*)arg2;

- (void).cxx_destruct;
- (bool)all:(id)arg1;
- (bool)any:(id)arg1;
- (id)init;
- (id)initWithPrefixes:(id)arg1 suffixes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)prefixes;
- (void)setPrefixes:(id)arg1;
- (void)setSuffixes:(id)arg1;
- (id)suffixes;

@end
