
@interface BMHomeKitClientActionSet : BMEventBase <BMStoreData> {
    NSString * _actionSetName;
    NSString * _actionSetType;
    NSString * _actionSetUniqueIdentifier;
    NSArray * _associatedAccessoryUniqueIdentifiers;
    BMHomeKitBase * _base;
    NSString * _homeName;
}

@property (nonatomic, readonly) NSString *actionSetName;
@property (nonatomic, readonly) NSString *actionSetType;
@property (nonatomic, readonly) NSString *actionSetUniqueIdentifier;
@property (nonatomic, readonly) NSArray *associatedAccessoryUniqueIdentifiers;
@property (nonatomic, readonly) BMHomeKitBase *base;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeName;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_associatedAccessoryUniqueIdentifiersJSONArray;
- (id)actionSetName;
- (id)actionSetType;
- (id)actionSetUniqueIdentifier;
- (id)associatedAccessoryUniqueIdentifiers;
- (id)base;
- (unsigned int)dataVersion;
- (id)description;
- (id)homeName;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBase:(id)arg1 actionSetUniqueIdentifier:(id)arg2 actionSetType:(id)arg3 associatedAccessoryUniqueIdentifiers:(id)arg4 actionSetName:(id)arg5 homeName:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
