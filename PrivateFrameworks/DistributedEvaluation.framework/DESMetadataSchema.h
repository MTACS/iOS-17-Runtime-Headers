
@interface DESMetadataSchema : NSObject {
    long long  _buckets;
    NSString * _desc;
    <DESMetadataEncoder> * _encoder;
    NSString * _key;
    int  _outputType;
}

@property (nonatomic, readonly) long long buckets;
@property (nonatomic, readonly) NSString *desc;
@property (nonatomic, readonly) <DESMetadataEncoder> *encoder;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) int outputType;

- (void).cxx_destruct;
- (long long)buckets;
- (id)desc;
- (id)encoder;
- (id)initWith:(id)arg1 key:(id)arg2 attachments:(id)arg3 error:(id*)arg4;
- (id)key;
- (int)outputType;

@end
