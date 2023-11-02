
@interface EDAMContactsQuery : FATObject {
    NSNumber * _maxEntries;
    NSString * _prefix;
}

@property (nonatomic, retain) NSNumber *maxEntries;
@property (nonatomic, retain) NSString *prefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)maxEntries;
- (id)prefix;
- (void)setMaxEntries:(id)arg1;
- (void)setPrefix:(id)arg1;

@end
