
@interface XREngineeringTypeBitpackedEncodingConvention : XREngineeringTypeEncodingConvention {
    NSMutableArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)entries;
- (id)init;

@end
