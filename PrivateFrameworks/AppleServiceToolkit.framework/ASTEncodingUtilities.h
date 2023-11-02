
@interface ASTEncodingUtilities : NSObject

+ (id)MD5ForFileHandle:(id)arg1;
+ (id)SHA256HashForString:(id)arg1;
+ (id)jsonSerializeObject:(id)arg1 error:(id*)arg2;
+ (id)parseJSONResponseWithData:(id)arg1 error:(id*)arg2;

@end
