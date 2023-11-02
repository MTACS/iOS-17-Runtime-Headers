
@interface _TVTemplateFeatureContextHandle : NSObject {
    id  _context;
    long long  _rank;
}

@property (nonatomic, readonly) id context;
@property (nonatomic) long long rank;

+ (id)handleWithContext:(id)arg1;

- (id)context;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)rank;
- (void)setRank:(long long)arg1;

@end
