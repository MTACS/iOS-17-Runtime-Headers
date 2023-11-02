
@interface AFHomeAnnouncementSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    AFHomeAnnouncement * _lastPlayedAnnouncement;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AFHomeAnnouncement *lastPlayedAnnouncement;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 lastPlayedAnnouncement:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastPlayedAnnouncement;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)serializedBackingStore;
- (unsigned long long)state;

@end
