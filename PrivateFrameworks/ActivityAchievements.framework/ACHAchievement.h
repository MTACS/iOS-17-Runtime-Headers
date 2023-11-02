
@interface ACHAchievement : NSObject <FCCDataSerializable, NSSecureCoding> {
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _badgeEnamelColor;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _badgeMetalColor;
    NSArray * _badgeModelFilenames;
    long long  _badgeModelVersion;
    NSString * _badgeShapeName;
    bool  _badgeUsesFullColorEnamel;
    bool  _badgeUsesTriColorEnamel;
    NSDictionary * _customPlaceholderValues;
    unsigned long long  _earnedInstanceCount;
    NSArray * _earnedInstances;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor1;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor2;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor3;
    bool  _faceHasMetalInlay;
    double  _glyphPositionOffsetX;
    double  _glyphPositionOffsetY;
    NSString * _glyphTextureFilename;
    double  _glyphTextureScale;
    HKQuantity * _goal;
    NSString * _localizationBundleURLString;
    bool  _prerequisiteMet;
    HKQuantity * _progress;
    NSString * _propertyListBundleURLString;
    ACHEarnedInstance * _relevantEarnedInstance;
    NSString * _resourceBundleURLString;
    NSString * _section;
    NSString * _stickerBundleURLString;
    ACHTemplate * _template;
    NSArray * _textureFilenames;
    bool  _unearnedUsesTwoToneEnamel;
}

@property struct { float x1; float x2; float x3; } badgeEnamelColor;
@property struct { float x1; float x2; float x3; } badgeMetalColor;
@property (retain) NSArray *badgeModelFilenames;
@property long long badgeModelVersion;
@property (retain) NSString *badgeShapeName;
@property bool badgeUsesFullColorEnamel;
@property bool badgeUsesTriColorEnamel;
@property (retain) NSDictionary *customPlaceholderValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long earnedInstanceCount;
@property (readonly) NSArray *earnedInstances;
@property struct { float x1; float x2; float x3; } enamelTriColor1;
@property struct { float x1; float x2; float x3; } enamelTriColor2;
@property struct { float x1; float x2; float x3; } enamelTriColor3;
@property bool faceHasMetalInlay;
@property double glyphPositionOffsetX;
@property double glyphPositionOffsetY;
@property (retain) NSString *glyphTextureFilename;
@property double glyphTextureScale;
@property (retain) HKQuantity *goal;
@property (readonly) bool hasClientRequiredURLs;
@property (readonly) unsigned long long hash;
@property (retain) NSURL *localizationBundleURL;
@property (retain) NSString *localizationBundleURLString;
@property bool prerequisiteMet;
@property (retain) HKQuantity *progress;
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSString *propertyListBundleURLString;
@property (retain) ACHEarnedInstance *relevantEarnedInstance;
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSString *resourceBundleURLString;
@property (copy) NSString *section;
@property (retain) NSURL *stickerBundleURL;
@property (retain) NSString *stickerBundleURLString;
@property (readonly) Class superclass;
@property (readonly) ACHTemplate *template;
@property (retain) NSArray *textureFilenames;
@property (readonly) bool unearned;
@property bool unearnedUsesTwoToneEnamel;

// Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { float x1; float x2; float x3; })badgeEnamelColor;
- (struct { float x1; float x2; float x3; })badgeMetalColor;
- (id)badgeModelFilenames;
- (long long)badgeModelVersion;
- (id)badgeShapeName;
- (bool)badgeUsesFullColorEnamel;
- (bool)badgeUsesTriColorEnamel;
- (id)customPlaceholderValues;
- (id)description;
- (unsigned long long)earnedInstanceCount;
- (id)earnedInstances;
- (struct { float x1; float x2; float x3; })enamelTriColor1;
- (struct { float x1; float x2; float x3; })enamelTriColor2;
- (struct { float x1; float x2; float x3; })enamelTriColor3;
- (void)encodeWithCoder:(id)arg1;
- (bool)faceHasMetalInlay;
- (double)glyphPositionOffsetX;
- (double)glyphPositionOffsetY;
- (id)glyphTextureFilename;
- (double)glyphTextureScale;
- (id)goal;
- (bool)hasClientRequiredURLs;
- (unsigned long long)hash;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1 earnedInstances:(id)arg2;
- (id)initWithTemplate:(id)arg1 relevantEarnedInstance:(id)arg2 earnedInstanceCount:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizationBundleURL;
- (id)localizationBundleURLString;
- (bool)prerequisiteMet;
- (id)progress;
- (id)propertyListBundleURL;
- (id)propertyListBundleURLString;
- (id)relevantEarnedInstance;
- (id)resourceBundleURL;
- (id)resourceBundleURLString;
- (id)section;
- (void)setBadgeEnamelColor:(struct { float x1; float x2; float x3; })arg1;
- (void)setBadgeMetalColor:(struct { float x1; float x2; float x3; })arg1;
- (void)setBadgeModelFilenames:(id)arg1;
- (void)setBadgeModelVersion:(long long)arg1;
- (void)setBadgeShapeName:(id)arg1;
- (void)setBadgeUsesFullColorEnamel:(bool)arg1;
- (void)setBadgeUsesTriColorEnamel:(bool)arg1;
- (void)setCustomPlaceholderValues:(id)arg1;
- (void)setEarnedInstanceCount:(unsigned long long)arg1;
- (void)setEnamelTriColor1:(struct { float x1; float x2; float x3; })arg1;
- (void)setEnamelTriColor2:(struct { float x1; float x2; float x3; })arg1;
- (void)setEnamelTriColor3:(struct { float x1; float x2; float x3; })arg1;
- (void)setFaceHasMetalInlay:(bool)arg1;
- (void)setGlyphPositionOffsetX:(double)arg1;
- (void)setGlyphPositionOffsetY:(double)arg1;
- (void)setGlyphTextureFilename:(id)arg1;
- (void)setGlyphTextureScale:(double)arg1;
- (void)setGoal:(id)arg1;
- (void)setLocalizationBundleURL:(id)arg1;
- (void)setLocalizationBundleURLString:(id)arg1;
- (void)setPrerequisiteMet:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setPropertyListBundleURL:(id)arg1;
- (void)setPropertyListBundleURLString:(id)arg1;
- (void)setRelevantEarnedInstance:(id)arg1;
- (void)setResourceBundleURL:(id)arg1;
- (void)setResourceBundleURLString:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setStickerBundleURL:(id)arg1;
- (void)setStickerBundleURLString:(id)arg1;
- (void)setTextureFilenames:(id)arg1;
- (void)setUnearnedUsesTwoToneEnamel:(bool)arg1;
- (id)shallowCopyReplacingEarnedInstances:(id)arg1;
- (id)shallowCopyWithRelevantEarnedInstance:(id)arg1;
- (id)stickerBundleURL;
- (id)stickerBundleURLString;
- (id)template;
- (id)textureFilenames;
- (bool)unearned;
- (bool)unearnedUsesTwoToneEnamel;

// Image: /System/Library/PrivateFrameworks/FitnessCoachingCore.framework/FitnessCoachingCore

- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end
