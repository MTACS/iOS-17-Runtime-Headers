
@interface CADFetchedObjectSerializer : NSObject {
    ClientConnection * _connection;
    NSArray * _defaultPropertiesToLoad;
    NSDictionary * _relatedObjectPropertiesToLoad;
    NSMutableSet * _seenObjectIDs;
    NSMutableArray * _wrappers;
}

@property (nonatomic, readonly) ClientConnection *connection;
@property (nonatomic, readonly) NSArray *defaultPropertiesToLoad;
@property (nonatomic, readonly) NSArray *fetchedObjectWrappers;
@property (nonatomic, readonly) NSDictionary *relatedObjectPropertiesToLoad;
@property (nonatomic, readonly) NSMutableSet *seenObjectIDs;
@property (nonatomic, readonly) NSMutableArray *wrappers;

- (void).cxx_destruct;
- (id)_fetchedObjectDictionaryForEntity:(void*)arg1;
- (id)_properties:(id)arg1 forEntityIfNotSeen:(void*)arg2 objectExists:(bool*)arg3;
- (id)addEntity:(void*)arg1;
- (id)connection;
- (id)defaultPropertiesToLoad;
- (id)fetchedObjectWrappers;
- (id)initWithConnection:(id)arg1 defaultPropertiesToLoad:(id)arg2;
- (id)initWithConnection:(id)arg1 defaultPropertiesToLoad:(id)arg2 relatedObjectPropertiesToLoad:(id)arg3;
- (id)relatedObjectPropertiesToLoad;
- (id)seenObjectIDs;
- (id)wrappers;

@end
