
@interface CNVCardReadingOptions : NSObject {
    unsigned long long  _contactLimit;
    unsigned long long  _maximumValueLength;
    NSArray * _propertiesToFetch;
    bool  _useConcurrentParsing;
}

@property (nonatomic) unsigned long long contactLimit;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic, copy) NSArray *propertiesToFetch;
@property (nonatomic) bool useConcurrentParsing;

- (void).cxx_destruct;
- (unsigned long long)contactLimit;
- (id)description;
- (id)init;
- (unsigned long long)maximumValueLength;
- (id)propertiesToFetch;
- (void)setContactLimit:(unsigned long long)arg1;
- (void)setMaximumValueLength:(unsigned long long)arg1;
- (void)setPropertiesToFetch:(id)arg1;
- (void)setUseConcurrentParsing:(bool)arg1;
- (bool)useConcurrentParsing;

@end
