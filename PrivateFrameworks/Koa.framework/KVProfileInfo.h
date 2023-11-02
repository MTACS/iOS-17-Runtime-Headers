
@interface KVProfileInfo : NSObject <KVJSONDecodable, KVJSONEncodable> {
    NSData * _buffer;
    const struct ProfileInfo { unsigned char x1[1]; } * _profileInfo;
}

@property (nonatomic, readonly) NSData *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)capturedWithDatasetCount:(unsigned int)arg1 error:(id*)arg2;
+ (id)syntheticWithDatasetCount:(unsigned int)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)JSONWithIndent:(unsigned char)arg1;
- (id)buffer;
- (id)buildVersion;
- (id)capturedTime;
- (unsigned int)datasetCount;
- (id)description;
- (id)deviceType;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithBuffer:(id)arg1 error:(id*)arg2;
- (id)initWithDatasetCount:(unsigned int)arg1 capturedTime:(id)arg2 deviceType:(id)arg3 buildVersion:(id)arg4 error:(id*)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProfileInfo:(id)arg1;

@end
