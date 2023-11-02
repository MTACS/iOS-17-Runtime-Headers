
@interface BCSRealTimeSignposter : NSObject {
    unsigned long long  _signpostIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long signpostIdentifier;
@property (nonatomic, readonly) long long type;

- (id)_initWithType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2;
- (unsigned long long)signpostIdentifier;
- (long long)type;

@end
