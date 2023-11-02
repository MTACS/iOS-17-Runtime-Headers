
@interface GEOPDFlyover : PBCodable <NSCopying> {
    struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; } * _cameraPaths;
    unsigned long long  _cameraPathsCount;
    unsigned long long  _cameraPathsSpace;
    struct { 
        unsigned int has_useSplines : 1; 
        unsigned int read_cameraPaths : 1; 
        unsigned int read_labelFrames : 1; 
        unsigned int read_labels : 1; 
        unsigned int read_notificationMessages : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _labelFrames;
    unsigned long long  _labelFramesCount;
    unsigned long long  _labelFramesSpace;
    NSMutableArray * _labels;
    NSMutableArray * _notificationMessages;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _useSplines;
}

@property (nonatomic, readonly) struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*cameraPaths;
@property (nonatomic, readonly) unsigned long long cameraPathsCount;
@property (nonatomic) bool hasUseSplines;
@property (nonatomic, readonly) struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*labelFrames;
@property (nonatomic, readonly) unsigned long long labelFramesCount;
@property (nonatomic, retain) NSMutableArray *labels;
@property (nonatomic, retain) NSMutableArray *notificationMessages;
@property (nonatomic) bool useSplines;

+ (id)flyoverForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;
+ (Class)labelType;
+ (Class)notificationMessageType;

- (void).cxx_destruct;
- (void)addCameraPath:(struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; })arg1;
- (void)addLabel:(id)arg1;
- (void)addLabelFrame:(struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addNotificationMessage:(id)arg1;
- (id)bestLocalizedAnnouncementMessage;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;
- (struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; })cameraPathAtIndex:(unsigned long long)arg1;
- (struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*)cameraPaths;
- (unsigned long long)cameraPathsCount;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)clearLabels;
- (void)clearNotificationMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUseSplines;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelAtIndex:(unsigned long long)arg1;
- (struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })labelFrameAtIndex:(unsigned long long)arg1;
- (struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)labelFrames;
- (unsigned long long)labelFramesCount;
- (id)labels;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (id)notificationMessages;
- (unsigned long long)notificationMessagesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame { float x1; float x2; float x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasUseSplines:(bool)arg1;
- (void)setLabelFrames:(struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setLabels:(id)arg1;
- (void)setNotificationMessages:(id)arg1;
- (void)setUseSplines:(bool)arg1;
- (bool)useSplines;
- (void)writeTo:(id)arg1;

@end
