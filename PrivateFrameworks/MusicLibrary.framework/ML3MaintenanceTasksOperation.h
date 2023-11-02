
@interface ML3MaintenanceTasksOperation : NSOperation {
    NSObject<OS_xpc_object> * _activity;
    ML3MusicLibrary * _library;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) ML3MusicLibrary *library;

- (void).cxx_destruct;
- (id)activity;
- (id)initWithLibrary:(id)arg1 activity:(id)arg2;
- (id)library;
- (void)main;

@end
