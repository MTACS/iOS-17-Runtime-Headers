
@interface VUIMediaAPIResponseMetadata : NSObject {
    NSString * _offset;
    NSNumber * _total;
}

@property (nonatomic, retain) NSString *offset;
@property (nonatomic, retain) NSNumber *total;

- (void).cxx_destruct;
- (id)offset;
- (void)setOffset:(id)arg1;
- (void)setTotal:(id)arg1;
- (id)total;

@end
