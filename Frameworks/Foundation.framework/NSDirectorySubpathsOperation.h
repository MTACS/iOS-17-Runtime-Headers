
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
    NSMutableArray * _subpaths;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)directorySubpathsOperationAtPath:(id)arg1;

- (void)dealloc;
- (void)handlePathname:(id)arg1;
- (id)subpaths;

@end
