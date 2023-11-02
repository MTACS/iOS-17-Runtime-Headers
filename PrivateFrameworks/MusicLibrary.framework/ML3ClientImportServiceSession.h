
@interface ML3ClientImportServiceSession : NSObject {
    ML3ClientImportSessionConfiguration * _configuration;
    ML3DatabaseConnection * _databaseConnection;
    void * _importSession;
    ML3MusicLibrary * _library;
}

- (void).cxx_destruct;
- (bool)addTrack:(id)arg1 persistentID:(id*)arg2;
- (bool)begin;
- (void)dealloc;
- (bool)finish;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3;
- (bool)removeTrack:(id)arg1 persistentID:(id*)arg2;
- (bool)updateTrack:(id)arg1 persistentID:(id*)arg2;

@end
