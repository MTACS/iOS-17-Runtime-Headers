
@interface _LSBundleIdentifierAndType : NSObject <NSCopying> {
    NSString * _bundleID;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *type;

+ (id)createRepresentingProxy:(id)arg1;
+ (id)createRepresentingRecord:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 type:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)type;

@end
