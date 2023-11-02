
@interface HKOverlayContextLocation : NSObject {
    long long  _containerIndex;
    long long  _itemIndex;
    long long  _sectionIndex;
}

@property (nonatomic, readonly) long long containerIndex;
@property (nonatomic, readonly) long long itemIndex;
@property (nonatomic, readonly) long long sectionIndex;

- (long long)containerIndex;
- (id)initWithContainerIndex:(long long)arg1 sectionIndex:(long long)arg2 itemIndex:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)itemIndex;
- (long long)sectionIndex;

@end
