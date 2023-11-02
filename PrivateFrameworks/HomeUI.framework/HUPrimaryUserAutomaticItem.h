
@interface HUPrimaryUserAutomaticItem : HFItem {
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)mediaProfileContainer;

@end
