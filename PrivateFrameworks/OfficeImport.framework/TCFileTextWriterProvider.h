
@interface TCFileTextWriterProvider : TCXmlTextWriterProvider {
    NSString * _filePath;
}

@property (nonatomic, readonly, copy) NSString *filePath;

- (void).cxx_destruct;
- (id)filePath;
- (id)initWithFilePath:(id)arg1;
- (bool)setUp;

@end
