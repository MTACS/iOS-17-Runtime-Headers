
@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding> {
    NSArray * _contactIDs;
    bool  _excludeBackfills;
    unsigned int  _flags;
    unsigned int  _maxPeople;
}

@property (nonatomic, copy) NSArray *contactIDs;
@property (nonatomic) bool excludeBackfills;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int maxPeople;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIDs;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeBackfills;
- (unsigned int)flags;
- (id)initWithCoder:(id)arg1;
- (unsigned int)maxPeople;
- (void)setContactIDs:(id)arg1;
- (void)setExcludeBackfills:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setMaxPeople:(unsigned int)arg1;

@end
