
@interface VCSEntity : NSObject <VCSDictifiable> {
    NSMutableArray * _children;
    VCSEntity * _parent;
    NSMutableDictionary * _propertyMap;
}

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic) VCSEntity *parent;
@property (nonatomic, readonly) NSArray *properties;
@property (readonly) Class superclass;

+ (id)stringForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addChildEntity:(id)arg1;
- (id)alarms;
- (id)children;
- (id)description;
- (id)dictify;
- (unsigned long long)entityType;
- (bool)hasPropertyWithName:(id)arg1;
- (id)init;
- (bool)isValidStatus:(unsigned long long)arg1;
- (id)parent;
- (id)properties;
- (id)propertyForName:(id)arg1;
- (void)removePropertyForName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setProperty:(id)arg1;

@end
