
@interface FAProfilePictureStore : NSObject {
    CNContactStore * _contactStore;
    FAFamilyCircle * _familyCircle;
    NSArray * _keysToFetch;
    NSMutableDictionary * _profileImages;
    NSMutableDictionary * _recommendedMembersImages;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) FAFamilyCircle *familyCircle;
@property (nonatomic, readonly, copy) NSDictionary *profileImages;
@property (nonatomic, readonly, copy) NSDictionary *recommendedMembersImages;

+ (id)_dataForImage:(id)arg1;
+ (id)profilePictureForContact:(id)arg1 serverImageData:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 diameter:(double)arg5;
+ (double)screenScale;

- (void).cxx_destruct;
- (void)_postReloadNotification;
- (void)_traitCollectionDidChange:(id)arg1;
- (id)contactFor:(id)arg1;
- (void)dealloc;
- (id)familyCircle;
- (void)fetchProfileImagesWithCompletion:(id /* block */)arg1;
- (void)fetchProfilePicturesForRecommendedFamilyMembers:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1;
- (void)notifyObservable;
- (id)profileImages;
- (id)profilePictureForFamilyMember:(id)arg1;
- (id)profilePictureForFamilyMember:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePictureForFamilyMemberWithAltDSID:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePictureForRecommendedFamilyMember:(id)arg1;
- (id)profilePicturesWithDiameter:(double)arg1;
- (id)recommendedMembersImages;
- (id)resizedPictureWithData:(id)arg1 diameter:(double)arg2;
- (void)setFamilyCircle:(id)arg1;

@end
