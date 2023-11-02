
@interface VCPositionalInfo : NSObject <NSSecureCoding> {
    bool  _hasPendingChanges;
    bool  _isInCanvas;
    bool  _isVisible;
    struct tagVCSpatialAudioMetadataPositionalInfo { 
        float positionX; 
        float positionY; 
        float positionZ; 
        unsigned int prominence; 
        unsigned int isVisible; 
        unsigned int isInCanvas; 
    }  _metadataPositionalInfo;
    unsigned int  _prominenceIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _x;
    double  _y;
    double  _z;
}

@property (nonatomic) struct tagAVCPositionalInfo { unsigned int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; } avcPositionalInfo;
@property (nonatomic, readonly) bool hasPendingChanges;
@property (nonatomic) bool isInCanvas;
@property (nonatomic) bool isVisible;
@property (nonatomic, readonly) const struct tagVCSpatialAudioMetadataPositionalInfo { float x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; }*metadataPositionalInfo;
@property (nonatomic) unsigned int prominenceIndex;

+ (bool)supportsSecureCoding;

- (struct tagAVCPositionalInfo { unsigned int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; })avcPositionalInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPendingChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isInCanvas;
- (bool)isVisible;
- (const struct tagVCSpatialAudioMetadataPositionalInfo { float x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)metadataPositionalInfo;
- (unsigned int)prominenceIndex;
- (id)serialize;
- (void)setAvcPositionalInfo:(struct tagAVCPositionalInfo { unsigned int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; })arg1;
- (void)setIsInCanvas:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setProminenceIndex:(unsigned int)arg1;
- (void)unserialize:(id)arg1;

@end
