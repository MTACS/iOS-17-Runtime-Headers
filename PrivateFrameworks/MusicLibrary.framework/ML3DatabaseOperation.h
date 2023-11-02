
@interface ML3DatabaseOperation : NSOperation {
    NSDictionary * _attributes;
    bool  _beganNewTransaction;
    NSError * _error;
    ML3MusicLibrary * _library;
    NSDictionary * _options;
    ML3Client * _originatingClient;
    bool  _success;
    ML3ActiveTransaction * _transaction;
    unsigned long long  _type;
    ML3MediaLibraryWriter * _writer;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, retain) ML3Client *originatingClient;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) ML3ActiveTransaction *transaction;
@property (nonatomic, readonly) unsigned long long type;

+ (id)databaseOperationForType:(unsigned long long)arg1 withLibrary:(id)arg2 writer:(id)arg3;

- (void).cxx_destruct;
- (bool)_execute:(id*)arg1;
- (id)_operationTypeDescription;
- (bool)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (id)attributes;
- (id)description;
- (id)error;
- (id)initWithLibrary:(id)arg1 writer:(id)arg2;
- (id)library;
- (void)main;
- (id)options;
- (id)originatingClient;
- (void)setAttributes:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginatingClient:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (id)transaction;
- (unsigned long long)type;

@end
