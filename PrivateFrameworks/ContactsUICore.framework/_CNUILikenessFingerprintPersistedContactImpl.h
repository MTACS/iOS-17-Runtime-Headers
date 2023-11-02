
@interface _CNUILikenessFingerprintPersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl> {
    NSString * _contactIdentifier;
}

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasContactIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
