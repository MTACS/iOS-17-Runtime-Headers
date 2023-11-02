
@interface CHPrefixQueryItem : NSObject {
    struct CGPath { } * _estimatedBaseline;
    NSString * _queryResult;
    NSSet * _strokeIdentifiers;
}

@property (nonatomic, readonly) struct CGPath { }*estimatedBaseline;
@property (nonatomic, readonly) NSString *queryResult;
@property (nonatomic, readonly, copy) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGPath { }*)estimatedBaseline;
- (bool)isEqualToPrefixQueryItem:(id)arg1;
- (id)queryResult;
- (id)strokeIdentifiers;

@end
