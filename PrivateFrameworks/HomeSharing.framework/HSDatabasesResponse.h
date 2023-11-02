
@interface HSDatabasesResponse : HSResponse {
    NSArray * _databases;
}

@property (nonatomic, copy) NSArray *databases;

- (void).cxx_destruct;
- (id)databases;
- (void)setDatabases:(id)arg1;

@end
