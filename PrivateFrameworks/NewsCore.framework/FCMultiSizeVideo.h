
@interface FCMultiSizeVideo : NSObject <NSCopying> {
    NSURL * _large;
    NSURL * _small;
}

@property (nonatomic, readonly) NSURL *large;
@property (nonatomic, readonly) NSURL *small;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithSmallVideoURL:(id)arg1 largeVideoURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)large;
- (id)small;

@end
