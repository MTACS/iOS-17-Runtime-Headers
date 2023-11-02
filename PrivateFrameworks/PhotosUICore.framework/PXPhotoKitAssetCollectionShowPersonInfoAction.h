
@interface PXPhotoKitAssetCollectionShowPersonInfoAction : UIAction {
    CNContact * _contact;
    long long  _type;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
