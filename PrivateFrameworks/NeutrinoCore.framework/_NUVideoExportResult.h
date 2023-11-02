
@interface _NUVideoExportResult : _NUExportResult <NUVideoExportResult> {
    NSString * _digest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *destinationURL;
@property (nonatomic, copy) NSString *digest;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)digest;
- (void)setDigest:(id)arg1;

@end
