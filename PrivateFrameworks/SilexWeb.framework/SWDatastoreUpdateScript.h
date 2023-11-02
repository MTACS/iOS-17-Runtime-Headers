
@interface SWDatastoreUpdateScript : NSObject <SWScript> {
    SWDatastore * _datastore;
    SWDatastore * _oldDatastore;
    <SWSession> * _originatingSession;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executableScript;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SWDatastore *oldDatastore;
@property (nonatomic, readonly) <SWSession> *originatingSession;
@property (nonatomic, readonly) bool queueable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserScript *userScript;

+ (id)source;

- (void).cxx_destruct;
- (id)datastore;
- (id)executableScript;
- (id)identifier;
- (id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3;
- (id)oldDatastore;
- (id)originatingSession;
- (bool)queueable;

@end
