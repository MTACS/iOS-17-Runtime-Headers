
@interface NTKUpNextDataSourceEntry : NSObject <NSCopying> {
    NSSet * _identifiers;
    bool  _isDonation;
    NSString * _localizedName;
}

@property (nonatomic, retain) NSSet *identifiers;
@property (nonatomic) bool isDonation;
@property (nonatomic, retain) NSString *localizedName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifiers;
- (id)initWithDataSourceIdentifiers:(id)arg1 localizedName:(id)arg2 isDonation:(bool)arg3;
- (bool)isDonation;
- (id)localizedName;
- (void)setIdentifiers:(id)arg1;
- (void)setIsDonation:(bool)arg1;
- (void)setLocalizedName:(id)arg1;

@end
