
@interface ATXTimelineRelevancePBTimelineRelevanceStackConfigSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int nonSmartStacksWithWidget : 1; 
        unsigned int smartStacksWithWidget : 1; 
        unsigned int standaloneWidgets : 1; 
        unsigned int widgetsWithUnknownStackKind : 1; 
    }  _has;
    int  _nonSmartStacksWithWidget;
    int  _smartStacksWithWidget;
    int  _standaloneWidgets;
    long long  _timestamp;
    int  _widgetsWithUnknownStackKind;
}

@property (nonatomic) bool hasNonSmartStacksWithWidget;
@property (nonatomic) bool hasSmartStacksWithWidget;
@property (nonatomic) bool hasStandaloneWidgets;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWidgetsWithUnknownStackKind;
@property (nonatomic) int nonSmartStacksWithWidget;
@property (nonatomic) int smartStacksWithWidget;
@property (nonatomic) int standaloneWidgets;
@property (nonatomic) long long timestamp;
@property (nonatomic) int widgetsWithUnknownStackKind;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNonSmartStacksWithWidget;
- (bool)hasSmartStacksWithWidget;
- (bool)hasStandaloneWidgets;
- (bool)hasTimestamp;
- (bool)hasWidgetsWithUnknownStackKind;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nonSmartStacksWithWidget;
- (bool)readFrom:(id)arg1;
- (void)setHasNonSmartStacksWithWidget:(bool)arg1;
- (void)setHasSmartStacksWithWidget:(bool)arg1;
- (void)setHasStandaloneWidgets:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWidgetsWithUnknownStackKind:(bool)arg1;
- (void)setNonSmartStacksWithWidget:(int)arg1;
- (void)setSmartStacksWithWidget:(int)arg1;
- (void)setStandaloneWidgets:(int)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setWidgetsWithUnknownStackKind:(int)arg1;
- (int)smartStacksWithWidget;
- (int)standaloneWidgets;
- (long long)timestamp;
- (int)widgetsWithUnknownStackKind;
- (void)writeTo:(id)arg1;

@end
