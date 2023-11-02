
@interface RSGenerationConfiguration : NSObject <NSCopying> {
    bool  _chairBeautificationEnabled;
    bool  _curveEnabled;
    bool  _nonUniformHeightEnabled;
    bool  _objectBeautificationEnabled;
    bool  _opendoorReplaceOpeningEnabled;
    bool  _openingReplaceOpendoorEnabled;
    bool  _roomTypeEnabled;
    bool  _standardizationEnabled;
    bool  _wallOpeningMergeEnabled;
    bool  _windowDoorDetectionEnabled;
}

@property (getter=isChairBeautificationEnabled, nonatomic) bool chairBeautificationEnabled;
@property (getter=isCurveEnabled, nonatomic) bool curveEnabled;
@property (getter=isNonUniformHeightEnabled, nonatomic) bool nonUniformHeightEnabled;
@property (getter=isObjectBeautificationEnabled, nonatomic) bool objectBeautificationEnabled;
@property (getter=isOpendoorReplaceOpeningEnabled, nonatomic) bool opendoorReplaceOpeningEnabled;
@property (getter=isOpeningReplaceOpendoorEnabled, nonatomic) bool openingReplaceOpendoorEnabled;
@property (getter=isRoomTypeEnabled, nonatomic) bool roomTypeEnabled;
@property (getter=isStandardizationEnabled, nonatomic) bool standardizationEnabled;
@property (getter=isWallOpeningMergeEnabled, nonatomic) bool wallOpeningMergeEnabled;
@property (getter=isWindowDoorDetectionEnabled, nonatomic) bool windowDoorDetectionEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isChairBeautificationEnabled;
- (bool)isCurveEnabled;
- (bool)isNonUniformHeightEnabled;
- (bool)isObjectBeautificationEnabled;
- (bool)isOpendoorReplaceOpeningEnabled;
- (bool)isOpeningReplaceOpendoorEnabled;
- (bool)isRoomTypeEnabled;
- (bool)isStandardizationEnabled;
- (bool)isWallOpeningMergeEnabled;
- (bool)isWindowDoorDetectionEnabled;
- (void)setChairBeautificationEnabled:(bool)arg1;
- (void)setCurveEnabled:(bool)arg1;
- (void)setNonUniformHeightEnabled:(bool)arg1;
- (void)setObjectBeautificationEnabled:(bool)arg1;
- (void)setOpendoorReplaceOpeningEnabled:(bool)arg1;
- (void)setOpeningReplaceOpendoorEnabled:(bool)arg1;
- (void)setRoomTypeEnabled:(bool)arg1;
- (void)setStandardizationEnabled:(bool)arg1;
- (void)setWallOpeningMergeEnabled:(bool)arg1;
- (void)setWindowDoorDetectionEnabled:(bool)arg1;

@end
