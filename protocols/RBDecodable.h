
@protocol RBDecodable <NSObject>

@required

+ (id)decodedObjectWithData:(NSData *)arg1 delegate:(id <RBDecoderDelegate>)arg2 error:(id*)arg3;

@end
