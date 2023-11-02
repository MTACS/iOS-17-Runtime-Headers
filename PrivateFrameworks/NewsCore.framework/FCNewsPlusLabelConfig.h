
@interface FCNewsPlusLabelConfig : NSObject {
    bool  _enabled;
    NSString * _toolTipAlternativeBodyForVoiceOver;
    NSString * _toolTipBody;
    int  _toolTipDisplayMaxCount;
    long long  _toolTipDisplayQuiescenceInterval;
    NSString * _toolTipTitle;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSString *toolTipAlternativeBodyForVoiceOver;
@property (nonatomic, readonly) NSString *toolTipBody;
@property (nonatomic, readonly) int toolTipDisplayMaxCount;
@property (nonatomic, readonly) long long toolTipDisplayQuiescenceInterval;
@property (nonatomic, readonly) NSString *toolTipTitle;

- (void).cxx_destruct;
- (bool)enabled;
- (id)initWithConfigDictionary:(id)arg1;
- (id)toolTipAlternativeBodyForVoiceOver;
- (id)toolTipBody;
- (int)toolTipDisplayMaxCount;
- (long long)toolTipDisplayQuiescenceInterval;
- (id)toolTipTitle;

@end
