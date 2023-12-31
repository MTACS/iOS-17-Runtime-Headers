
@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (nonatomic, copy) NSArray *readerAvailableConnections;
@property (nonatomic, copy) NSArray *readerBusyConnections;
@property (nonatomic, copy) NSArray *writerAvailableConnections;
@property (nonatomic, copy) NSArray *writerBusyConnections;

- (void)setReaderAvailableConnections:(id)arg1;
- (void)setReaderBusyConnections:(id)arg1;
- (void)setWriterAvailableConnections:(id)arg1;
- (void)setWriterBusyConnections:(id)arg1;

@end
