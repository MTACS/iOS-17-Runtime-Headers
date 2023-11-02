
@interface AMSUIDDynamicImpressionMetricsIdentifier : NSObject {
    void element;
    void index;
    void parent;
}

@property (nonatomic, copy) NSString *element;
@property (nonatomic) long long index;
@property (nonatomic, copy) NSString *parent;

- (void).cxx_destruct;
- (id)element;
- (long long)index;
- (id)init;
- (id)initWithParent:(id)arg1 element:(id)arg2 index:(long long)arg3;
- (id)parent;
- (void)setElement:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setParent:(id)arg1;

@end
