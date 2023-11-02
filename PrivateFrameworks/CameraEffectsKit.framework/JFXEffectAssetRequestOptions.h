
@interface JFXEffectAssetRequestOptions : NSObject <NSCopying> {
    NSArray * _filterOptionsArray;
    bool  _networkAccessDisabled;
    long long  _priority;
}

@property (nonatomic, retain) NSArray *filterOptionsArray;
@property (getter=isNetworkAccessDisabled, nonatomic) bool networkAccessDisabled;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterOptionsArray;
- (id)init;
- (bool)isNetworkAccessDisabled;
- (long long)priority;
- (void)setFilterOptionsArray:(id)arg1;
- (void)setNetworkAccessDisabled:(bool)arg1;
- (void)setPriority:(long long)arg1;

@end
