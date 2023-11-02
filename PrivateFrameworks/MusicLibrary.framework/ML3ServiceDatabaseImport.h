
@interface ML3ServiceDatabaseImport : ML3DatabaseImport {
    ML3Client * _client;
    ML3MusicLibrary * _library;
    ML3MediaLibraryWriter * _writer;
}

@property (nonatomic, readonly) ML3Client *client;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) ML3MediaLibraryWriter *writer;

- (void).cxx_destruct;
- (id)client;
- (id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4;
- (id)library;
- (id)writer;

@end
