
@interface PGPhotoChangeToGraphChangeConverter : NSObject {
    NSMutableDictionary * _entityTranslatorByEntityName;
    NSObject<OS_os_log> * _loggingConnection;
}

- (void).cxx_destruct;
- (void)_registerTranslatorsWithPhotoLibrary:(id)arg1;
- (id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;

@end
