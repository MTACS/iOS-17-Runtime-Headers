
@interface GDGraphTopic : NSObject <GDGraphObject> {
    NSArray * _allQid;
    GDGraphTopicEntityIdentifier * _entityIdentifier;
    NSString * _qid;
}

@property (nonatomic, readonly, copy) NSArray *allQid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphTopicEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *qid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allQid;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 qidField:(id)arg2 allQidField:(id)arg3;
- (id)qid;

@end
