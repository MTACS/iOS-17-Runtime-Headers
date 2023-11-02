
@interface RCPScreenSnapshot : NSObject {
    long long  _index;
    UIImage * _snapshotImage;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long index;
@property (nonatomic, retain) UIImage *snapshotImage;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)description;
- (long long)index;
- (id)init;
- (void)setIndex:(long long)arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)snapshotImage;
- (unsigned long long)timestamp;

@end
