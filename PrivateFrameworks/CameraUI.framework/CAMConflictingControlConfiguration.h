
@interface CAMConflictingControlConfiguration : NSObject {
    long long  _desiredFlashMode;
    long long  _desiredHDRMode;
    long long  _desiredLivePhotoMode;
    unsigned long long  _desiredLowLightControlMode;
    long long  _desiredPhotoResolution;
    long long  _desiredRAWMode;
    long long  _flashAndHDRConflictingControl;
    unsigned long long  _lowLightConflicts;
    unsigned long long  _photoFormatConflicts;
}

@property (nonatomic, readonly) long long desiredFlashMode;
@property (nonatomic, readonly) long long desiredHDRMode;
@property (nonatomic, readonly) long long desiredLivePhotoMode;
@property (nonatomic, readonly) unsigned long long desiredLowLightControlMode;
@property (nonatomic, readonly) long long desiredPhotoResolution;
@property (nonatomic, readonly) long long desiredRAWMode;
@property (nonatomic, readonly) long long flashAndHDRConflictingControl;
@property (nonatomic, readonly) unsigned long long lowLightConflicts;
@property (nonatomic, readonly) unsigned long long photoFormatConflicts;

+ (void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long*)arg5 HDRMode:(long long*)arg6;
+ (unsigned long long)resolveDesiredLowLightControlMode:(unsigned long long)arg1 lowLightConflicts:(unsigned long long)arg2 resolvedFlashMode:(long long)arg3;
+ (void)resolveDesiredRAWMode:(long long)arg1 photoFormatConflicts:(unsigned long long)arg2 desiredLivePhotoMode:(long long)arg3 desiredFlashMode:(long long)arg4 toRAWMode:(long long*)arg5 toLivePhotoMode:(long long*)arg6 toFlashMode:(long long*)arg7;

- (long long)desiredFlashMode;
- (long long)desiredHDRMode;
- (long long)desiredLivePhotoMode;
- (unsigned long long)desiredLowLightControlMode;
- (long long)desiredPhotoResolution;
- (long long)desiredRAWMode;
- (long long)flashAndHDRConflictingControl;
- (id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3 desiredLivePhotoMode:(long long)arg4 desiredRAWMode:(long long)arg5 desiredPhotoResolution:(long long)arg6 photoFormatConflicts:(unsigned long long)arg7 desiredLowLightControlMode:(unsigned long long)arg8 lowLightConflicts:(unsigned long long)arg9;
- (unsigned long long)lowLightConflicts;
- (unsigned long long)photoFormatConflicts;

@end
