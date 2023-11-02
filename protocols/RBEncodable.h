
@protocol RBEncodable <NSObject>

@required

- (NSData *)encodedDataForDelegate:(id <RBEncoderDelegate>)arg1 error:(id*)arg2;

@end
