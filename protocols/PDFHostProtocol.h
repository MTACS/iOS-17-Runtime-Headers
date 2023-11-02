
@protocol PDFHostProtocol <NSObject>

@required

- (oneway void)extensionSnapshotToHost:(IOSurface *)arg1 scale:(double)arg2;
- (oneway void)extensionToHost:(NSDictionary *)arg1;

@end
