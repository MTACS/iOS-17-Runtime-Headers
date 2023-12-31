
@interface ATXPBInfoSuggestion : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSData * _archivedIntent;
    NSData * _archivedIntentDescription;
    NSData * _archivedMetadata;
    NSString * _clientModelId;
    long long  _confidenceLevel;
    NSString * _criterion;
    double  _endDate;
    struct { 
        unsigned int confidenceLevel : 1; 
        unsigned int endDate : 1; 
        unsigned int layouts : 1; 
        unsigned int relevanceScore : 1; 
        unsigned int startDate : 1; 
    }  _has;
    long long  _layouts;
    double  _relevanceScore;
    NSString * _sourceIdentifier;
    double  _startDate;
    NSString * _suggestionIdentifier;
    NSString * _widgetBundleIdentifier;
    NSString * _widgetKind;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSData *archivedIntent;
@property (nonatomic, retain) NSData *archivedIntentDescription;
@property (nonatomic, retain) NSData *archivedMetadata;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic) long long confidenceLevel;
@property (nonatomic, retain) NSString *criterion;
@property (nonatomic) double endDate;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasArchivedIntent;
@property (nonatomic, readonly) bool hasArchivedIntentDescription;
@property (nonatomic, readonly) bool hasArchivedMetadata;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic) bool hasConfidenceLevel;
@property (nonatomic, readonly) bool hasCriterion;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasLayouts;
@property (nonatomic) bool hasRelevanceScore;
@property (nonatomic, readonly) bool hasSourceIdentifier;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasSuggestionIdentifier;
@property (nonatomic, readonly) bool hasWidgetBundleIdentifier;
@property (nonatomic, readonly) bool hasWidgetKind;
@property (nonatomic) long long layouts;
@property (nonatomic) double relevanceScore;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSString *suggestionIdentifier;
@property (nonatomic, retain) NSString *widgetBundleIdentifier;
@property (nonatomic, retain) NSString *widgetKind;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)archivedIntent;
- (id)archivedIntentDescription;
- (id)archivedMetadata;
- (id)clientModelId;
- (long long)confidenceLevel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criterion;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasAppBundleIdentifier;
- (bool)hasArchivedIntent;
- (bool)hasArchivedIntentDescription;
- (bool)hasArchivedMetadata;
- (bool)hasClientModelId;
- (bool)hasConfidenceLevel;
- (bool)hasCriterion;
- (bool)hasEndDate;
- (bool)hasLayouts;
- (bool)hasRelevanceScore;
- (bool)hasSourceIdentifier;
- (bool)hasStartDate;
- (bool)hasSuggestionIdentifier;
- (bool)hasWidgetBundleIdentifier;
- (bool)hasWidgetKind;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)layouts;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)relevanceScore;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setArchivedIntent:(id)arg1;
- (void)setArchivedIntentDescription:(id)arg1;
- (void)setArchivedMetadata:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setConfidenceLevel:(long long)arg1;
- (void)setCriterion:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasConfidenceLevel:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasLayouts:(bool)arg1;
- (void)setHasRelevanceScore:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setLayouts:(long long)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setSuggestionIdentifier:(id)arg1;
- (void)setWidgetBundleIdentifier:(id)arg1;
- (void)setWidgetKind:(id)arg1;
- (id)sourceIdentifier;
- (double)startDate;
- (id)suggestionIdentifier;
- (id)widgetBundleIdentifier;
- (id)widgetKind;
- (void)writeTo:(id)arg1;

@end
