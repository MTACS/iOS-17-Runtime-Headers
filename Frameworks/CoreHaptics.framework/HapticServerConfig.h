
@interface HapticServerConfig : NSObject {
    NSString * _currentLocality;
    float  _defaultHapticContinuousEventIntensity;
    float  _defaultHapticContinuousEventSharpness;
    float  _defaultHapticTransientEventIntensity;
    float  _defaultHapticTransientEventSharpness;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticContinuousNonsustainedIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticContinuousSustainedIDs;
    float  _hapticContinuousTimeLimit;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticTransientIDs;
    bool  _supportsAdvancedPatternPlayers;
    bool  _supportsAudioPlayback;
    bool  _supportsHapticPlayback;
    bool  _usingInternalHaptics;
}

@property (readonly) NSString *currentLocality;
@property (readonly) float defaultHapticContinuousEventIntensity;
@property (readonly) float defaultHapticContinuousEventSharpness;
@property (readonly) float defaultHapticTransientEventIntensity;
@property (readonly) float defaultHapticTransientEventSharpness;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  hapticContinuousNonsustainedIDs; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  hapticContinuousSustainedIDs; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */
@property (readonly) float hapticContinuousTimeLimit;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  hapticTransientIDs; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */
@property (readonly) bool supportsAdvancedPatternPlayers;
@property (readonly) bool supportsAudioPlayback;
@property (readonly) bool supportsHapticPlayback;
@property (readonly) bool usingInternalHaptics;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)currentLocality;
- (float)defaultHapticContinuousEventIntensity;
- (float)defaultHapticContinuousEventSharpness;
- (float)defaultHapticTransientEventIntensity;
- (float)defaultHapticTransientEventSharpness;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })hapticContinuousNonsustainedIDs;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })hapticContinuousSustainedIDs;
- (float)hapticContinuousTimeLimit;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })hapticTransientIDs;
- (id)initWithHapticPlayer:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)supportsAdvancedPatternPlayers;
- (bool)supportsAudioPlayback;
- (bool)supportsHapticPlayback;
- (bool)usingInternalHaptics;

@end
