
@interface BMHomeKitClientActionSetEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _actionSetName;
    NSString * _actionSetType;
    NSString * _actionSetUniqueIdentifier;
    NSArray * _associatedAccessoryUniqueIdentifiers;
    BMHomeKitClientBase * _base;
    NSString * _homeName;
}

@property (nonatomic, readonly, copy) NSString *actionSetName;
@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSString *actionSetUniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *associatedAccessoryUniqueIdentifiers;
@property (nonatomic, readonly, copy) BMHomeKitClientBase *base;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)actionSetName;
- (id)actionSetType;
- (id)actionSetUniqueIdentifier;
- (id)associatedAccessoryUniqueIdentifiers;
- (id)base;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)homeName;
- (id)initWithBase:(id)arg1 actionSetUniqueIdentifier:(id)arg2 actionSetType:(id)arg3 associatedAccessoryUniqueIdentifiers:(id)arg4 actionSetName:(id)arg5 homeName:(id)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;

@end
