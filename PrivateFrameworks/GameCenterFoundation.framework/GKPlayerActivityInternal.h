
@interface GKPlayerActivityInternal : GKInternalRepresentation {
    NSString * _continuationToken;
    NSArray * _sections;
}

@property (nonatomic, retain) NSString *continuationToken;
@property (nonatomic, retain) NSArray *sections;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)continuationToken;
- (id)description;
- (id)initWithServerResponse:(id)arg1;
- (id)sections;
- (void)setContinuationToken:(id)arg1;
- (void)setSections:(id)arg1;

@end
