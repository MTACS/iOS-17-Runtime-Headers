
@interface NSSUsageDataSizeCategory : NSObject {
    NSString * _categoryIdentifier;
    NSString * _name;
    NSSSizeVector * _size;
}

@property (nonatomic, readonly, retain) NSString *categoryIdentifier;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSSSizeVector *size;

- (void).cxx_destruct;
- (id)categoryIdentifier;
- (id)initWithIdentifier:(id)arg1 size:(id)arg2 name:(id)arg3;
- (id)name;
- (id)size;

@end
