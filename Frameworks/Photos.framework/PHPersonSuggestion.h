
@interface PHPersonSuggestion : NSObject <PXPerson> {
    bool  _confirmed;
    PHFace * _keyFace;
    PHPerson * _person;
    double  _similarityScore;
}

@property (nonatomic, readonly) bool confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) short detectionType;
@property (readonly) unsigned long long hash;
@property (readonly) bool isPersonModel;
@property (readonly) bool isVerified;
@property (nonatomic, readonly) PHFace *keyFace;
@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) bool px_isHuman;
@property (readonly) bool px_isPet;
@property (readonly) NSDate *px_keyPhotoDate;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) NSString *px_localizedName;
@property (readonly) NSString *px_longStyleLocalizedName;
@property (nonatomic, readonly) double similarityScore;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void).cxx_destruct;
- (bool)confirmed;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(bool)arg3 similarityScore:(double)arg4;
- (id)keyFace;
- (id)person;
- (double)similarityScore;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;

- (short)detectionType;
- (bool)isPersonModel;
- (bool)isVerified;
- (id)name;
- (unsigned long long)numberOfAssets;
- (bool)px_isHuman;
- (bool)px_isPet;
- (id)px_keyPhotoDate;
- (id)px_localIdentifier;
- (id)px_localizedName;
- (id)px_longStyleLocalizedName;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(bool)arg5 synchronous:(bool)arg6 resultHandler:(id /* block */)arg7;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(bool)arg4 boundFaceRect:(bool)arg5 completionBlock:(id /* block */)arg6;

@end
