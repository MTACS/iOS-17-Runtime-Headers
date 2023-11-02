
@interface WBSPhishingConfigurationDomain : NSObject {
    NSArray * _expressions;
}

@property (nonatomic, readonly, copy) NSArray *expressions;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)expressions;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithExpressions:(id)arg1 error:(id*)arg2;
- (bool)matchesURL:(id)arg1;

@end
