
@interface HUPrimaryUserItemProvider : HFItemProvider {
    HMHome * _home;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NSMutableSet * _userItems;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) NSMutableSet *userItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)mediaProfileContainer;
- (id)reloadItems;
- (void)setUserItems:(id)arg1;
- (id)userItems;

@end
