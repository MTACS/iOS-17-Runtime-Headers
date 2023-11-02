
@interface SSMutableLogConfig : SSLogConfig <NSCopying>

@property (nonatomic, copy) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, copy) NSString *outputDirectory;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, copy) NSString *subsystem;
@property (nonatomic) bool writeToDisk;

@end
