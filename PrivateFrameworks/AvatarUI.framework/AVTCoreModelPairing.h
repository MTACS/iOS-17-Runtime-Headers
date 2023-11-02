
@interface AVTCoreModelPairing : NSObject {
    NSString * _localizedPairTitle;
    NSString * _localizedPairedDescription;
    NSString * _localizedPairedTitle;
    NSString * _localizedUnpairTitle;
    NSString * _localizedUnpairedDescription;
    long long  _pairedCategory;
}

@property (nonatomic, readonly, copy) NSString *localizedPairTitle;
@property (nonatomic, readonly, copy) NSString *localizedPairedDescription;
@property (nonatomic, readonly, copy) NSString *localizedPairedTitle;
@property (nonatomic, readonly, copy) NSString *localizedUnpairTitle;
@property (nonatomic, readonly, copy) NSString *localizedUnpairedDescription;
@property (nonatomic, readonly) long long pairedCategory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4 pairedDescription:(id)arg5 unpairedDescription:(id)arg6;
- (id)localizedPairTitle;
- (id)localizedPairedDescription;
- (id)localizedPairedTitle;
- (id)localizedUnpairTitle;
- (id)localizedUnpairedDescription;
- (long long)pairedCategory;

@end
