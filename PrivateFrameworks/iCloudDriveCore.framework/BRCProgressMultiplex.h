
@interface BRCProgressMultiplex : NSObject {
    long long  _completedUnitCount;
    NSString * _localizedAdditionalDescription;
    NSString * _localizedDescription;
    long long  _totalUnitCount;
    NSArray * _underlineProgressObjects;
}

@property (nonatomic) long long completedUnitCount;
@property (nonatomic, copy) NSString *localizedAdditionalDescription;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) long long totalUnitCount;

- (void).cxx_destruct;
- (id)brc_dumpDescription;
- (void)brc_publish;
- (void)brc_unpublish;
- (long long)completedUnitCount;
- (bool)indeterminate;
- (id)initWithUnderlineProgressObjects:(id)arg1;
- (bool)isPublished;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (long long)totalUnitCount;

@end
