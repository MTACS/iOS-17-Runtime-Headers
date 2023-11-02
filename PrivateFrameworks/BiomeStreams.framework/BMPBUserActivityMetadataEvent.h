
@interface BMPBUserActivityMetadataEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _activityType;
    NSString * _associatedBundleId;
    NSString * _associatedURLString;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int hasAssociatedImageRepresentation : 1; 
    }  _has;
    bool  _hasAssociatedImageRepresentation;
    NSString * _modeIdentifier;
    NSString * _title;
    NSMutableArray * _topics;
    NSData * _userActivityData;
    NSString * _uuid;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *activityType;
@property (nonatomic, retain) NSString *associatedBundleId;
@property (nonatomic, retain) NSString *associatedURLString;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasActivityType;
@property (nonatomic, readonly) bool hasAssociatedBundleId;
@property (nonatomic) bool hasAssociatedImageRepresentation;
@property (nonatomic, readonly) bool hasAssociatedURLString;
@property (nonatomic) bool hasHasAssociatedImageRepresentation;
@property (nonatomic, readonly) bool hasModeIdentifier;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUserActivityData;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *modeIdentifier;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSMutableArray *topics;
@property (nonatomic, retain) NSData *userActivityData;
@property (nonatomic, retain) NSString *uuid;

+ (Class)topicsType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)activityType;
- (void)addTopics:(id)arg1;
- (id)associatedBundleId;
- (id)associatedURLString;
- (void)clearTopics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasActivityType;
- (bool)hasAssociatedBundleId;
- (bool)hasAssociatedImageRepresentation;
- (bool)hasAssociatedURLString;
- (bool)hasHasAssociatedImageRepresentation;
- (bool)hasModeIdentifier;
- (bool)hasTitle;
- (bool)hasUserActivityData;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modeIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setActivityType:(id)arg1;
- (void)setAssociatedBundleId:(id)arg1;
- (void)setAssociatedURLString:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasAssociatedImageRepresentation:(bool)arg1;
- (void)setHasHasAssociatedImageRepresentation:(bool)arg1;
- (void)setModeIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopics:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)topics;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (id)userActivityData;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
