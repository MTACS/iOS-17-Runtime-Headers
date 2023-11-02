
@interface _REHistogramRange : NSObject <NSCopying, REComparable> {
    unsigned long long  _max;
    unsigned long long  _mid;
    unsigned long long  _min;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long max;
@property (nonatomic, readonly) unsigned long long mid;
@property (nonatomic, readonly) unsigned long long min;
@property (readonly) Class superclass;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)max;
- (unsigned long long)mid;
- (unsigned long long)min;

@end
