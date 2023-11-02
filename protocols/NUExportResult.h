
@protocol NUExportResult <NURenderResult>

@required

- (NSURL *)destinationURL;
- (NUImageGeometry *)geometry;

@end
