
@interface AMSData : NSObject

+ (long long)_dataEncodingFromResponse:(id)arg1;
+ (id)compressedGzippedDataWithData:(id)arg1;
+ (long long)dataEncodingFromContentType:(id)arg1;
+ (id)dataWithObject:(id)arg1 encoding:(long long)arg2 error:(id*)arg3;
+ (id)decompressedDataWithGzippedData:(id)arg1;
+ (id)objectWithData:(id)arg1 encoding:(long long)arg2 error:(id*)arg3;
+ (id)objectWithData:(id)arg1 response:(id)arg2 error:(id*)arg3;

@end
