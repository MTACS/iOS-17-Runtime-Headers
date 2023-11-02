
@interface HUPrimaryUserItem : HFUserItem {
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithHome:(id)arg1 mediaProfileContainer:(id)arg2 user:(id)arg3;
- (id)mediaProfileContainer;

@end
