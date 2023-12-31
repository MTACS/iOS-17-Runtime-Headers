
@interface CoreDAVGetToFileTask : CoreDAVGetTask {
    NSFileHandle * _destinationFile;
}

@property (nonatomic, retain) NSFileHandle *destinationFile;

- (void).cxx_destruct;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)destinationFile;
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;
- (void)setDestinationFile:(id)arg1;
- (bool)shouldLogResponseBody;

@end
