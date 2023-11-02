
@interface ODDDataPoint : ODDPoint {
    NSMutableArray * mPresentations;
}

- (void).cxx_destruct;
- (void)addAssociatedPresentation:(id)arg1;
- (void)addPresentation:(id)arg1 order:(unsigned long long)arg2;
- (id)presentations;

@end
