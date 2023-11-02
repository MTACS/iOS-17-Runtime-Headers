
@interface IMInternalPayloadUtilities : NSObject

+ (bool)writeData:(id)arg1 toURL:(id)arg2;
+ (bool)writeDataPayloadToDisk:(id)arg1 fileName:(id)arg2;
+ (bool)writeMessagePayloadToDisk:(id)arg1 fileName:(id)arg2;
+ (id)writeMessagePayloadToTemporaryDirectory:(id)arg1 fileName:(id)arg2;
+ (bool)writePayload:(id)arg1 toURL:(id)arg2;

@end
