
@interface KVDatasetInfo : NSObject <KVJSONDecodable, KVJSONEncodable> {
    NSData * _buffer;
    const struct DatasetInfo { unsigned char x1[1]; } * _datasetInfo;
}

@property (nonatomic, readonly) NSData *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)JSONWithIndent:(unsigned char)arg1;
- (id)buffer;
- (id)capturedTime;
- (id)description;
- (id)deviceId;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithBuffer:(id)arg1 error:(id*)arg2;
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 lastModifiedTime:(id)arg5 capturedTime:(id)arg6 itemCount:(unsigned int)arg7 error:(id*)arg8;
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 itemCount:(unsigned int)arg3 error:(id*)arg4;
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 userId:(id)arg3 itemCount:(unsigned int)arg4 error:(id*)arg5;
- (id)initWithSizePrefixedBuffer:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDatasetInfo:(id)arg1;
- (unsigned int)itemCount;
- (long long)itemType;
- (id)lastModifiedTime;
- (id)originAppId;
- (id)userId;

@end
