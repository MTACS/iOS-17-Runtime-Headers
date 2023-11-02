
@interface BMPBUserFocusComputedModeEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int modeSemanticType : 1; 
        unsigned int modeUpdateReason : 1; 
        unsigned int modeUpdateSource : 1; 
        unsigned int starting : 1; 
    }  _has;
    NSString * _mode;
    int  _modeSemanticType;
    int  _modeUpdateReason;
    int  _modeUpdateSource;
    NSString * _semanticModeIdentifier;
    bool  _starting;
}

@property (nonatomic, readonly) bool hasMode;
@property (nonatomic) bool hasModeSemanticType;
@property (nonatomic) bool hasModeUpdateReason;
@property (nonatomic) bool hasModeUpdateSource;
@property (nonatomic, readonly) bool hasSemanticModeIdentifier;
@property (nonatomic) bool hasStarting;
@property (nonatomic, retain) NSString *mode;
@property (nonatomic) int modeSemanticType;
@property (nonatomic) int modeUpdateReason;
@property (nonatomic) int modeUpdateSource;
@property (nonatomic, retain) NSString *semanticModeIdentifier;
@property (nonatomic) bool starting;

- (void).cxx_destruct;
- (int)StringAsModeSemanticType:(id)arg1;
- (int)StringAsModeUpdateReason:(id)arg1;
- (int)StringAsModeUpdateSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMode;
- (bool)hasModeSemanticType;
- (bool)hasModeUpdateReason;
- (bool)hasModeUpdateSource;
- (bool)hasSemanticModeIdentifier;
- (bool)hasStarting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mode;
- (int)modeSemanticType;
- (id)modeSemanticTypeAsString:(int)arg1;
- (int)modeUpdateReason;
- (id)modeUpdateReasonAsString:(int)arg1;
- (int)modeUpdateSource;
- (id)modeUpdateSourceAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)semanticModeIdentifier;
- (void)setHasModeSemanticType:(bool)arg1;
- (void)setHasModeUpdateReason:(bool)arg1;
- (void)setHasModeUpdateSource:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setMode:(id)arg1;
- (void)setModeSemanticType:(int)arg1;
- (void)setModeUpdateReason:(int)arg1;
- (void)setModeUpdateSource:(int)arg1;
- (void)setSemanticModeIdentifier:(id)arg1;
- (void)setStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
