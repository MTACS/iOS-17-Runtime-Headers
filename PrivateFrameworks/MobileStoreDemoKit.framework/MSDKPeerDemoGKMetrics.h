
@interface MSDKPeerDemoGKMetrics : NSObject <NSSecureCoding> {
    NSArray * _GKDataList;
}

@property (nonatomic, retain) NSArray *GKDataList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GKDataList;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGKDataList:(id)arg1;
- (void)setGKDataList:(id)arg1;

@end
