
@interface CNContactImage : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSString * _displayString;
    NSString * _identifier;
    bool  _ignoredForRevert;
    NSData * _imageData;
    NSDate * _lastUsedDate;
    CNContactPoster * _pairedPoster;
    NSData * _poseConfigurationData;
    long long  _source;
    NSString * _sourceIdentifier;
    NSString * _variant;
    CNVisualFingerprint * _visualFingerprint;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool ignoredForRevert;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, retain) CNContactPoster *pairedPoster;
@property (nonatomic, retain) NSData *poseConfigurationData;
@property (nonatomic) long long source;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, retain) NSString *variant;
@property (nonatomic, retain) CNVisualFingerprint *visualFingerprint;

- (void).cxx_destruct;
- (id)copyWithNewImageData:(id)arg1;
- (id)copyWithNewImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)displayString;
- (id)identifier;
- (bool)ignoredForRevert;
- (id)imageData;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lastUsedDate:(id)arg4;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 lastUsedDate:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 source:(long long)arg5 sourceIdentifier:(id)arg6 variant:(id)arg7 poseConfigurationData:(id)arg8 displayString:(id)arg9 ignoredForRevert:(bool)arg10;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 lastUsedDate:(id)arg3;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 lastUsedDate:(id)arg3 source:(long long)arg4;
- (id)lastUsedDate;
- (id)pairedPoster;
- (id)poseConfigurationData;
- (id)resizedContactImageForMeCardSharing;
- (id)resizedContactImageToMaxEdgeWidth:(unsigned long long)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setIgnoredForRevert:(bool)arg1;
- (void)setPairedPoster:(id)arg1;
- (void)setPoseConfigurationData:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setVariant:(id)arg1;
- (void)setVisualFingerprint:(id)arg1;
- (long long)source;
- (id)sourceIdentifier;
- (id)variant;
- (id)visualFingerprint;

@end
