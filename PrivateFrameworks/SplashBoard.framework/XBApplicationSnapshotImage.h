
@interface XBApplicationSnapshotImage : UIImage {
    long long  _interfaceOrientation;
    XBApplicationSnapshot * _snapshot;
}

@property (nonatomic, readonly) long long interfaceOrientation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (long long)interfaceOrientation;

@end
