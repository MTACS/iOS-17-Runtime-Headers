
@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _badgeType;
    NSString * _contentType;
    QLCacheVersionedFileIdentifier * _fileIdentifier;
    int  _flavor;
    long long  _generationBehavior;
    bool  _iconMode;
    double  _minimumDimension;
    unsigned long long  _requestedTypes;
    double  _scale;
    bool  _shouldProvideFoldedGenericIcon;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSUUID * _uuid;
    bool  _wantsBaseline;
}

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, copy) NSString *contentType;
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property int flavor;
@property (nonatomic, readonly) bool forceGeneration;
@property long long generationBehavior;
@property (readonly) bool iconMode;
@property (readonly) float maximumPixelSize;
@property (nonatomic) double minimumDimension;
@property (nonatomic, readonly) bool provideCachedResultsOnly;
@property (nonatomic, readonly) bool provideFullResolutionThumbnail;
@property (nonatomic, readonly) bool provideGenericIcon;
@property (nonatomic, readonly) bool provideLowQualityThumbnail;
@property (nonatomic, readonly) long long requestedMostRepresentativeType;
@property (nonatomic) unsigned long long requestedTypes;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldProvideFoldedGenericIcon;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (retain) NSUUID *uuid;
@property bool wantsBaseline;

+ (bool)supportsSecureCoding;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5 error:(id*)arg6;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (long long)compare:(id)arg1;
- (id)computeContentType;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileIdentifier;
- (int)flavor;
- (bool)forceGeneration;
- (long long)generationBehavior;
- (unsigned long long)hash;
- (bool)iconMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersionedFileIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4 flavor:(int)arg5 wantsBaseline:(bool)arg6 minimumDimension:(double)arg7 requestedTypes:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (float)maximumPixelSize;
- (double)minimumDimension;
- (bool)provideCachedResultsOnly;
- (bool)provideFullResolutionThumbnail;
- (bool)provideGenericIcon;
- (bool)provideLowQualityThumbnail;
- (long long)requestedMostRepresentativeType;
- (unsigned long long)requestedTypes;
- (double)scale;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setFlavor:(int)arg1;
- (void)setGenerationBehavior:(long long)arg1;
- (void)setMinimumDimension:(double)arg1;
- (void)setRequestedTypes:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setShouldProvideFoldedGenericIcon:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUuid:(id)arg1;
- (void)setWantsBaseline:(bool)arg1;
- (bool)shouldProvideFoldedGenericIcon;
- (struct CGSize { double x1; double x2; })size;
- (id)uuid;
- (bool)wantsBaseline;

@end
