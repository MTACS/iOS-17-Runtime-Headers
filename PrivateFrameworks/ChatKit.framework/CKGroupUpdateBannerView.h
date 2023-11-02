
@interface CKGroupUpdateBannerView : CKNicknameBannerView {
    NSArray * _groupUpdates;
    long long  _updateBannerType;
}

@property (nonatomic, retain) NSArray *groupUpdates;
@property (nonatomic) long long updateBannerType;

- (void).cxx_destruct;
- (id)groupUpdates;
- (id)init;
- (void)setGroupUpdates:(id)arg1;
- (void)setUpdateBannerType:(long long)arg1;
- (long long)updateBannerType;

@end
