
@interface PGPotentialUpNextMemory : NSObject <PGPotentialUpNextMemoryProtocol> {
    PHAsset * _keyAsset;
    PHMemory * _memory;
    bool  _noKeyAsset;
    PHPhotoLibrary * _photoLibrary;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) NSString *keyAssetLocalIdentifier;
@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) NSString *memoryLocalIdentifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithMemory:(id)arg1 photoLibrary:(id)arg2 userFeedbackCalculator:(id)arg3;
- (bool)isBlockedByUserFeedback;
- (id)keyAsset;
- (id)keyAssetLocalIdentifier;
- (id)memory;
- (id)memoryLocalIdentifier;
- (id)subtitle;
- (id)title;

@end
