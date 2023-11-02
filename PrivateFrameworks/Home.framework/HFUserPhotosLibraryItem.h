
@interface HFUserPhotosLibraryItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMHome * _home;
    HMUser * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithUser:(id)arg1 inHome:(id)arg2;
- (id)user;

@end
