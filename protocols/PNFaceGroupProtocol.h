
@protocol PNFaceGroupProtocol <NSObject>

@required

- (unsigned long long)faceCountInFaceGroup;
- (bool)isDirty;
- (NSString *)localIdentifier;

@end
