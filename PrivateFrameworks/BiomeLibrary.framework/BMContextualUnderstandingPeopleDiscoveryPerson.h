
@interface BMContextualUnderstandingPeopleDiscoveryPerson : BMEventBase <BMStoreData> {
    unsigned int  _activityLevel;
    NSString * _contactID;
    unsigned int  _flags;
    bool  _hasActivityLevel;
    bool  _hasFlags;
    bool  _hasProximity;
    NSString * _identifier;
    NSString * _name;
    unsigned int  _proximity;
}

@property (nonatomic, readonly) unsigned int activityLevel;
@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic) bool hasActivityLevel;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasProximity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int proximity;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)activityLevel;
- (id)contactID;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)flags;
- (bool)hasActivityLevel;
- (bool)hasFlags;
- (bool)hasProximity;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContactID:(id)arg1 identifier:(id)arg2 name:(id)arg3 flags:(id)arg4 activityLevel:(id)arg5 proximity:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (unsigned int)proximity;
- (id)serialize;
- (void)setHasActivityLevel:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasProximity:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
