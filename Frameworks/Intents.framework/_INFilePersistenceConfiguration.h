
@interface _INFilePersistenceConfiguration : NSObject {
    NSString * _filePath;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)filePath;
- (id)identifier;
- (void)setFilePath:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
