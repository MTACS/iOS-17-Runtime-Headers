
@interface ARLineCloud : NSObject <NSCopying> {
    NSArray * _lines;
}

@property (nonatomic, readonly) NSArray *lines;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLineCloudData:(id)arg1;
- (id)lines;

@end
