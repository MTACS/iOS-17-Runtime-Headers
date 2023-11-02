
@interface _SWBSActionSettings : NSObject {
    BSMutableSettings * _mutableSettings;
}

@property (nonatomic, retain) BSMutableSettings *mutableSettings;

- (void).cxx_destruct;
- (id)bsSettings;
- (id)init;
- (id)mutableSettings;
- (void)setMutableSettings:(id)arg1;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;

@end
