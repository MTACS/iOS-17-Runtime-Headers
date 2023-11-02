
@interface PLDuplicateDetectorLivePhotoContextData : NSObject {
    bool  _isSharedLibrary;
    short  _subtype;
}

@property (readonly) unsigned long long hash;
@property bool isSharedLibrary;
@property short subtype;

+ (id)dataWithSubtype:(short)arg1 isSharedLibrary:(bool)arg2;

- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSharedLibrary;
- (void)setIsSharedLibrary:(bool)arg1;
- (void)setSubtype:(short)arg1;
- (short)subtype;

@end
