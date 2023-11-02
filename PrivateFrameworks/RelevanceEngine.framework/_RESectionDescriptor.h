
@interface _RESectionDescriptor : NSObject {
    bool  _allowsSubsections;
    bool  _invertRanking;
    long long  _maxElementCount;
    NSString * _name;
    NSArray * _rules;
}

@property (nonatomic, readonly) bool allowsSubsections;
@property (nonatomic, readonly) bool invertRanking;
@property (nonatomic) long long maxElementCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSArray *rules;

- (void).cxx_destruct;
- (bool)allowsSubsections;
- (id)initWithHistoricSectionDescriptor:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1;
- (bool)invertRanking;
- (long long)maxElementCount;
- (id)name;
- (id)rules;
- (void)setMaxElementCount:(long long)arg1;
- (void)setRules:(id)arg1;

@end
