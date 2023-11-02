
@interface HFAccessorySettingSiriAssetAdapter : HFAccessorySettingAdapter {
    int  _status;
}

@property (nonatomic) int status;

- (unsigned long long)combineStatus:(unsigned long long)arg1 withSet:(id)arg2;
- (unsigned long long)immediateStatusForIdentifier:(id)arg1;
- (id)initWithHome:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)statusForIdentifier:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)stringForStatus:(unsigned long long)arg1;

@end
