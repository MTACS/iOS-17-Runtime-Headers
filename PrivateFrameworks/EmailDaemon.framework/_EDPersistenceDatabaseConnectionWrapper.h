
@interface _EDPersistenceDatabaseConnectionWrapper : NSObject {
    EDPersistenceDatabaseConnection * _connection;
    unsigned long long  _generation;
    EFResource * _resource;
    unsigned long long  _type;
}

@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, retain) EFResource *resource;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)connection;
- (unsigned long long)generation;
- (id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2;
- (id)resource;
- (void)setResource:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
