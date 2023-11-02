
@interface PGGraphPortraitKnowledgeToDonate : NSObject {
    NSArray * _locationNamedEntities;
    NSArray * _namedEntities;
    NSDictionary * _topics;
}

@property (nonatomic, readonly) NSArray *locationNamedEntities;
@property (nonatomic, readonly) NSArray *namedEntities;
@property (nonatomic, readonly) NSDictionary *topics;

- (void).cxx_destruct;
- (id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3;
- (id)locationNamedEntities;
- (id)namedEntities;
- (id)topics;

@end
