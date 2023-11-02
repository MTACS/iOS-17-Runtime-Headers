
@interface CNUILikenessFingerprint : NSObject <NSCopying> {
    <_CNUILikenessFingerprintImpl> * _impl;
}

+ (id)fingerprintForContact:(id)arg1;
+ (id)fingerprintForContactIdentifier:(id)arg1;
+ (id)fingerprintForContacts:(id)arg1 scope:(id)arg2;
+ (id)fingerprintForData:(id)arg1;
+ (id)fingerprintForScope:(id)arg1;
+ (id)implForContact:(id)arg1;
+ (id)publicFingerprintForContact:(id)arg1;
+ (id)publicFingerprintForContacts:(id)arg1 scope:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasContactIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1 badges:(id)arg2 scope:(id)arg3;
- (id)initWithImpl:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
