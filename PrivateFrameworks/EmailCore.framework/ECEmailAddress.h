
@interface ECEmailAddress : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding> {
    ECEmailAddressComponents * _components;
    NSArray * _groupList;
    unsigned long long  _hash;
}

@property (nonatomic, readonly, copy) ECEmailAddressComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) ECEmailAddress *emailAddressValue;
@property (readonly, copy) NSArray *groupList;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *idnaAddress;
@property (readonly, copy) NSString *localPart;
@property (readonly, copy) NSString *simpleAddress;
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

+ (id)_cachedEmailAddressForString:(id)arg1 generator:(id /* block */)arg2;
+ (id)emailAddressWithString:(id)arg1;
+ (id)emailAddressesFromStrings:(id)arg1 invalidAddresses:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_createComponentsFrom:(id)arg1;
- (id)_initWithComponents:(id)arg1;
- (long long)compare:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (id)emailAddressValue;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)groupList;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)stringValue;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)em_partiallyRedactedPeople:(id)arg1;

- (id)em_displayableString;
- (id)em_person;

@end
