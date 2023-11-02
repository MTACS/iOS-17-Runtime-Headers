
@interface GDGraphVisualIdentifierRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allAssociationReason;
    NSArray * _allSuggestedName;
    NSArray * _allVisualIdentifier;
    NSString * _associationReason;
    NSString * _suggestedName;
    NSString * _visualIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *allAssociationReason;
@property (nonatomic, readonly, copy) NSArray *allSuggestedName;
@property (nonatomic, readonly, copy) NSArray *allVisualIdentifier;
@property (nonatomic, readonly, copy) NSString *associationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *suggestedName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *visualIdentifier;

- (void).cxx_destruct;
- (id)allAssociationReason;
- (id)allSuggestedName;
- (id)allVisualIdentifier;
- (id)associationReason;
- (Class)graphObjectType;
- (id)initWithVisualIdentifierField:(id)arg1 associationReasonField:(id)arg2 suggestedNameField:(id)arg3 allVisualIdentifierField:(id)arg4 allAssociationReasonField:(id)arg5 allSuggestedNameField:(id)arg6;
- (id)suggestedName;
- (id)visualIdentifier;

@end
