
@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long type;

+ (id)containerWithIdentifier:(id)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_appBundleContainerDirectoryAsOwner;
- (id)_appBundleContainerDirectoryAsSystemWithError:(id*)arg1;
- (id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)arg1 error:(id*)arg2;
- (id)_appDataContainerDirectoryAsOwner;
- (id)_appDataContainerDirectoryAsSystemWithError:(id*)arg1;
- (id)_containerError:(unsigned long long)arg1 withFormat:(id)arg2;
- (id)_containerURLWithError:(id*)arg1;
- (id)_groupContainerDirectoryAsOwner;
- (id)_groupContainerDirectoryAsSystemWithError:(id*)arg1;
- (id)containerURL;
- (id)containerURLAsOwner;
- (id)copyWithReplacementIdentifier:(id)arg1;
- (id)copyWithReplacementType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fetchStatus;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (id)sanitizedIdentifier;
- (long long)type;

@end
