
@interface CSFRangeUtils : NSObject {
    unsigned long long  _endPoint;
    unsigned long long  _startPoint;
}

@property (nonatomic, readonly) unsigned long long endPoint;
@property (nonatomic, readonly) unsigned long long startPoint;

- (unsigned long long)endPoint;
- (bool)hasIntersectionWithRange:(id)arg1;
- (id)initWithStartPoint:(unsigned long long)arg1 endPoint:(unsigned long long)arg2;
- (unsigned long long)startPoint;

@end
