
@interface SFCounterfactualInfo : NSObject {
    bool  _cfDiffered;
    unsigned long long  _cfError;
    bool  _cfUsed;
}

@property (nonatomic) bool cfDiffered;
@property (nonatomic) unsigned long long cfError;
@property (nonatomic) bool cfUsed;

- (bool)cfDiffered;
- (unsigned long long)cfError;
- (bool)cfUsed;
- (void)setCfDiffered:(bool)arg1;
- (void)setCfError:(unsigned long long)arg1;
- (void)setCfUsed:(bool)arg1;

@end
