
@interface ATXFeedbackStateReader : NSObject {
    NSString * _abGroup;
    long long  _assetVersion;
    NSData * _data;
    const char * _perPredictionDataStart;
    Class  _predictedItemKeyClass;
    int  _predictionCount;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) long long assetVersion;

+ (id)numberKeyWithData:(id)arg1;
+ (id)stringKeyWithData:(id)arg1;

- (void).cxx_destruct;
- (id)abGroup;
- (long long)assetVersion;
- (void)enumerateApps:(id /* block */)arg1;
- (id)init;
- (id)initWithData:(id)arg1 predictedItemKeyClass:(Class)arg2;

@end
