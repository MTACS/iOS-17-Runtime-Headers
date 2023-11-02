
@protocol WebDocumentText <NSObject>

@required

- (void)deselectAll;
- (void)selectAll;
- (NSString *)selectedString;
- (NSString *)string;
- (bool)supportsTextEncoding;

@end
