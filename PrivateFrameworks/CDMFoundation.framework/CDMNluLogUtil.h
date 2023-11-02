
@interface CDMNluLogUtil : NSObject

+ (id)getLogBasePath;
+ (id)loadDataFromProtobuf2File:(id)arg1 error:(id*)arg2;
+ (id)loadOverrideSpansFromProtobuf2File:(id)arg1 error:(id*)arg2;
+ (id)loadRequestFromProtobuf2File:(id)arg1 error:(id*)arg2;
+ (id)loadSubwordEmbeddingRequestFromProtobuf2File:(id)arg1 error:(id*)arg2;
+ (void)populateErrorWithUserInfo:(id*)arg1 errorMessage:(id)arg2 errorCode:(long long)arg3;
+ (id)prettyPrintProtoResponse:(id)arg1;
+ (id)prettyPrintResponse:(id)arg1;
+ (bool)saveCLIResult:(id)arg1 protobufFile:(id)arg2 preprocess:(bool)arg3 saveBinary:(bool)arg4 error:(id*)arg5;
+ (bool)savePreprocessingWrapperJson:(id)arg1 toFile:(id)arg2 error:(id*)arg3;
+ (bool)saveProtoFile:(id)arg1 protobufFile:(id)arg2 error:(id*)arg3;
+ (bool)saveResponseToProtobuf2:(id)arg1 protobufFile:(id)arg2 error:(id*)arg3;
+ (bool)saveResponseToProtobuf:(id)arg1 protobufFile:(id)arg2 error:(id*)arg3;
+ (bool)saveSpanMatchResponseToProtobuf:(id)arg1 protobufFile:(id)arg2 error:(id*)arg3;
+ (bool)saveString:(id)arg1 toFile:(id)arg2 error:(id*)arg3;
+ (bool)saveSubwordEmbeddingResponseJson:(id)arg1 toFile:(id)arg2 error:(id*)arg3;
+ (id)writeLVCRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeLVCResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeMDRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeMDResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeMRRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeMRResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeNlv4RequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeNlv4ResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writePSCRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writePSCResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeSNLCRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeSNLCResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeSSURequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeSSUResponseToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeUaaPRequestToDisk:(id)arg1 error:(id*)arg2;
+ (id)writeUaaPResponseToDisk:(id)arg1 error:(id*)arg2;

@end
