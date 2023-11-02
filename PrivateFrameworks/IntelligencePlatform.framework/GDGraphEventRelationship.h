
@interface GDGraphEventRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allEventId;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _eventId;
}

@property (nonatomic, readonly, copy) NSArray *allEventId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *eventId;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allEventId;
- (id)eventId;
- (Class)graphObjectType;
- (id)initWithEventIdField:(id)arg1 allEventIdField:(id)arg2;

@end
