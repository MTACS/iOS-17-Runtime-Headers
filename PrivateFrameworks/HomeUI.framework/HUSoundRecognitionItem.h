
@interface HUSoundRecognitionItem : HFItem {
    HMHome * _home;
}

@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;

@end
