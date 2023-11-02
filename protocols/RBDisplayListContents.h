
@protocol RBDisplayListContents <NSObject, RBEncodable, RBDecodable>

@required

+ (<RBDisplayListContents> *)decodedObjectWithData:(NSData *)arg1 delegate:(id <RBDecoderDelegate>)arg2 error:(id*)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (void)drawInState:(void*)arg1;
- (bool)isEmpty;
- (void)renderInContext:(struct CGContext { }*)arg1 options:(NSDictionary *)arg2;
- (NSString *)xmlDescription;

@end
