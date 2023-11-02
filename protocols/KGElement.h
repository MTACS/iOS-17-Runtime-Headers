
@protocol KGElement <NSObject, NSCopying>

@required

- (unsigned long long)identifier;
- (NSSet *)labels;
- (NSDictionary *)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;

@end
