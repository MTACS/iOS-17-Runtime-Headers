
@interface HFFaceClassificationSignificantEventItem : HFCameraClipSignificantEventItem <HFPersonLikeItem> {
    UIImage * _faceCropImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HMFaceClassification *faceClassification;
@property (nonatomic, retain) UIImage *faceCropImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) HMPerson *person;
@property (nonatomic, readonly) HMPersonManager *personManager;
@property (readonly) Class superclass;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)faceClassification;
- (id)faceCropImage;
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2;
- (id)person;
- (id)personManager;
- (void)setFaceCropImage:(id)arg1;

@end
