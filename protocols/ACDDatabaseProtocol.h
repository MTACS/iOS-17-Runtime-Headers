
@protocol ACDDatabaseProtocol <NSObject>

@required

- (ACDDatabaseConnection *)createConnection;

@end
