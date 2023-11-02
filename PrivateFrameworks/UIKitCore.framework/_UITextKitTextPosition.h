
@interface _UITextKitTextPosition : UITextPosition {
    long long  _affinity;
    <NSTextLocation> * _location;
    long long  _offset;
}

@property (nonatomic, readonly) long long affinity;
@property (nonatomic, readonly) <NSTextLocation> *location;
@property (nonatomic, readonly) long long offset;

+ (id)positionWithOffset:(long long)arg1;
+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
+ (id)positionWithTextContentManager:(id)arg1 location:(id)arg2 affinity:(long long)arg3;

- (void).cxx_destruct;
- (long long)affinity;
- (long long)compare:(id)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)location;
- (long long)offset;

@end
