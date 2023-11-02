
@interface GDGraphTopicRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allTopicId;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _topicId;
}

@property (nonatomic, readonly, copy) NSArray *allTopicId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *topicId;

- (void).cxx_destruct;
- (id)allTopicId;
- (Class)graphObjectType;
- (id)initWithTopicIdField:(id)arg1 allTopicIdField:(id)arg2;
- (id)topicId;

@end
