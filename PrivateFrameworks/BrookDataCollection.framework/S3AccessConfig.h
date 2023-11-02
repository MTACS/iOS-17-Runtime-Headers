
@interface S3AccessConfig : NSObject {
    NSString * _AWSAccessKeyID;
    NSString * _AWSSecretAccessKey;
}

@property (nonatomic, retain) NSString *AWSAccessKeyID;
@property (nonatomic, retain) NSString *AWSSecretAccessKey;

- (void).cxx_destruct;
- (id)AWSAccessKeyID;
- (id)AWSSecretAccessKey;
- (id)initWithAWSAccessKeyID:(id)arg1 AWSSecretAccessKey:(id)arg2;
- (void)setAWSAccessKeyID:(id)arg1;
- (void)setAWSSecretAccessKey:(id)arg1;

@end
