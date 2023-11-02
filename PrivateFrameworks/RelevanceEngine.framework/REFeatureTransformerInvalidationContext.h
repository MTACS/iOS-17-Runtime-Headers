
@interface REFeatureTransformerInvalidationContext : NSObject {
    NSDate * _invalidationDate;
}

@property (nonatomic, readonly) NSDate *invalidationDate;

- (void).cxx_destruct;
- (void)invalidateAtDate:(id)arg1;
- (id)invalidationDate;

@end
