
@interface SKKeyedUnarchiver : NSKeyedUnarchiver {
    NSArray * searchPaths;
}

@property (nonatomic, retain) NSArray *searchPaths;

- (void).cxx_destruct;
- (id)searchPaths;
- (void)setSearchPaths:(id)arg1;

@end
