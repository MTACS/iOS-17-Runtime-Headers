
@interface CKAtomBatchReaderOptions : NSObject {
    NSDictionary * _underlyingReaderOptionsByClass;
}

@property (nonatomic, copy) NSDictionary *underlyingReaderOptionsByClass;

- (void).cxx_destruct;
- (void)setUnderlyingReaderOptionsByClass:(id)arg1;
- (id)underlyingReaderOptionsByClass;

@end
