
@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {
    NSArray * _attributes;
    NSDictionary * _children;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, copy) NSDictionary *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributes;
- (id)childForKey:(id)arg1;
- (id)children;
- (id)initWithAttributes:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithChildren:(id)arg1 attributes:(id)arg2;
- (void)setChildren:(id)arg1;

@end
