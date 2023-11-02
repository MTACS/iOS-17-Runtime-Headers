
@interface NBHashBucketer : NSObject {
    NBObjCHashBucketer * _bucketer;
}

@property (nonatomic, readonly) NBObjCHashBucketer *bucketer;

- (void).cxx_destruct;
- (unsigned long long)bucketForHash:(id)arg1 bucketCount:(unsigned long long)arg2;
- (id)bucketer;
- (id)init;

@end
