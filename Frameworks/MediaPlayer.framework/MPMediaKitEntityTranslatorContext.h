
@interface MPMediaKitEntityTranslatorContext : NSObject {
    NSString * _personID;
    <MPMediaKitEntityRelationshipPayloadProvider> * _relationshipPayloadProvider;
}

@property (nonatomic, copy) NSString *personID;
@property (nonatomic, retain) <MPMediaKitEntityRelationshipPayloadProvider> *relationshipPayloadProvider;

- (void).cxx_destruct;
- (id)personID;
- (id)relationshipPayloadProvider;
- (void)setPersonID:(id)arg1;
- (void)setRelationshipPayloadProvider:(id)arg1;

@end
