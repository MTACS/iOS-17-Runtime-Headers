
@interface SWLocalDatastoreSetupScript : NSObject <SWScript> {
    SWDatastore * _datastore;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executableScript;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool queueable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserScript *userScript;

+ (id)source;

- (void).cxx_destruct;
- (id)datastore;
- (id)identifier;
- (id)initWithDatastore:(id)arg1;
- (bool)queueable;
- (id)userScript;

@end
