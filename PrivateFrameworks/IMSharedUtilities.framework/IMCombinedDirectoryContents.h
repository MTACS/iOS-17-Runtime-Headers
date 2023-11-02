
@interface IMCombinedDirectoryContents : IMDirectoryContents {
    NSArray * _directoryContents;
}

@property (nonatomic, readonly) NSArray *directoryContents;

- (void).cxx_destruct;
- (id)combineArrays:(id)arg1 rhs:(id)arg2;
- (id)directoryContents;
- (void)gather;
- (id)initWithCombinedDirectoryContents:(id)arg1;

@end
