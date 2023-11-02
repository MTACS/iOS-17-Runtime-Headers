
@interface BMUniversalRecentsMetadata : BMEventBase <BMStoreData> {
    NSString * _activityType;
    NSString * _associatedBundleID;
    NSString * _associatedURLString;
    bool  _hasAssociatedImageRepresentation;
    bool  _hasHasAssociatedImageRepresentation;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _modeIdentifier;
    double  _raw_absoluteTimestamp;
    NSString * _title;
    NSArray * _topics;
    NSData * _userActivityData;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *associatedBundleID;
@property (nonatomic, readonly) NSString *associatedURLString;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAssociatedImageRepresentation;
@property (nonatomic) bool hasHasAssociatedImageRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *modeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSData *userActivityData;
@property (nonatomic, readonly) NSString *uuid;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_topicsJSONArray;
- (id)absoluteTimestamp;
- (id)activityType;
- (id)associatedBundleID;
- (id)associatedURLString;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAssociatedImageRepresentation;
- (bool)hasHasAssociatedImageRepresentation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 userActivityData:(id)arg2 title:(id)arg3 activityType:(id)arg4 associatedBundleID:(id)arg5 associatedURLString:(id)arg6 modeIdentifier:(id)arg7 topics:(id)arg8 hasAssociatedImageRepresentation:(id)arg9 uuid:(id)arg10;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)modeIdentifier;
- (id)serialize;
- (void)setHasHasAssociatedImageRepresentation:(bool)arg1;
- (id)title;
- (id)topics;
- (id)userActivityData;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
