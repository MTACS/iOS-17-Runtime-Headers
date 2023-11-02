
@interface _TUIPointQueue : NSObject {
    NSMutableArray * _nonSentinelPoints;
}

@property (nonatomic, readonly) NSMutableArray *nonSentinelPoints;

- (void).cxx_destruct;
- (unsigned long long)effectiveStartIndexBasedOnLength;
- (id)init;
- (id)nonSentinelPoints;

@end
