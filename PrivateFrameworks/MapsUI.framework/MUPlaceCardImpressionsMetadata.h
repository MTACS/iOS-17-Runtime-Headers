
@interface MUPlaceCardImpressionsMetadata : NSObject {
    unsigned long long  _businessId;
    bool  _enriched;
    unsigned int  _localSearchProviderId;
    unsigned long long  _moduleIndex;
    int  _moduleType;
    NSString * _query;
}

@property (nonatomic) unsigned long long businessId;
@property (getter=isEnriched, nonatomic) bool enriched;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) unsigned long long moduleIndex;
@property (nonatomic) int moduleType;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (unsigned long long)businessId;
- (bool)isEnriched;
- (unsigned int)localSearchProviderId;
- (unsigned long long)moduleIndex;
- (int)moduleType;
- (id)query;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setEnriched:(bool)arg1;
- (void)setLocalSearchProviderId:(unsigned int)arg1;
- (void)setModuleIndex:(unsigned long long)arg1;
- (void)setModuleType:(int)arg1;
- (void)setQuery:(id)arg1;

@end
