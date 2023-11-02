
@interface AMSUIDynamicImpressionMetricsIdentifier : NSObject {
    NSString * _element;
    long long  _index;
    NSString * _parent;
}

@property (nonatomic, retain) NSString *element;
@property (nonatomic) long long index;
@property (nonatomic, retain) NSString *parent;

- (void).cxx_destruct;
- (id)element;
- (long long)index;
- (id)initWithParent:(id)arg1 element:(id)arg2 index:(long long)arg3;
- (id)parent;
- (void)setElement:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setParent:(id)arg1;

@end
