
@interface SUViewControllerContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _metadata;
    NSString * _sectionIdentifier;
    long long  _type;
}

@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (long long)_typeForTypeString:(id)arg1;
- (id)_typeStringForType:(long long)arg1;
- (id)copyViewController;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sectionIdentifier;
- (void)setSectionIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (long long)type;
- (id)valueForMetadataKey:(id)arg1;

@end
