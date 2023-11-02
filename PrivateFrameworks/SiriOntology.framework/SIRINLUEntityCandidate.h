
@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding> {
    NSArray * _annotations;
    NSString * _appBundleId;
    USOSerializedGraph * _entity;
    NSString * _entityId;
    SIRINLURRGroupIdentifier * _groupId;
    double  _score;
}

@property (nonatomic, retain) NSArray *annotations;
@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) USOSerializedGraph *entity;
@property (nonatomic, retain) NSString *entityId;
@property (nonatomic, retain) SIRINLURRGroupIdentifier *groupId;
@property double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)annotations;
- (id)appBundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)entityId;
- (id)groupId;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntity:(id)arg1 score:(double)arg2;
- (id)initWithEntity:(id)arg1 score:(double)arg2 entityId:(id)arg3 appBundleId:(id)arg4 groupId:(id)arg5 annotations:(id)arg6;
- (double)score;
- (void)setAnnotations:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setEntityId:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setScore:(double)arg1;

@end
