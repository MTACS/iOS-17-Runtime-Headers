
@interface VCSessionPresentationInfo : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _appWindowRect;
    unsigned int  _displayID;
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySize;
    bool  _hasPendingChanges;
    struct tagVCSpatialAudioMetadataGlobalInfo { 
        unsigned int displayID; 
        float displayWidth; 
        float displayHeight; 
        float appWindowWidth; 
        float appWindowHeight; 
        float appWindowPositionX; 
        float appWindowPositionY; 
        unsigned int uiLayout; 
        unsigned int uiState; 
    }  _metadataGlobalInfo;
    unsigned int  _uiLayout;
    unsigned char  _uiState;
}

@property (nonatomic) struct tagAVCSessionPresentationInfo { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned char x4; } avcSessionPresentationInfo;
@property (nonatomic, readonly) bool hasPendingChanges;
@property (nonatomic, readonly) const struct tagVCSpatialAudioMetadataGlobalInfo { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned int x9; }*metadataGlobalInfo;
@property (nonatomic, readonly) unsigned char uiState;

+ (unsigned int)avcLayoutWithLayout:(unsigned int)arg1;
+ (unsigned char)avcUIStateWithUIState:(unsigned char)arg1;
+ (unsigned int)layoutWithAVCLayout:(unsigned int)arg1;
+ (unsigned int)metadataSateWithUIState:(unsigned char)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned char)uiStateWithAVCUIState:(unsigned char)arg1;

- (struct tagAVCSessionPresentationInfo { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned char x4; })avcSessionPresentationInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPendingChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (const struct tagVCSpatialAudioMetadataGlobalInfo { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned int x9; }*)metadataGlobalInfo;
- (id)serialize;
- (void)setAvcSessionPresentationInfo:(struct tagAVCSessionPresentationInfo { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned char x4; })arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (unsigned char)uiState;
- (void)unserialize:(id)arg1;

@end
