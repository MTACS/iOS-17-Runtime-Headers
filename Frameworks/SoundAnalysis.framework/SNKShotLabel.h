
@interface SNKShotLabel : NSObject {
    void impl;
}

@property (nonatomic, readonly) long long type;

- (id)init;
- (id)initAsNegativeLabel;
- (id)initAsPositiveLabel;
- (long long)type;

@end
