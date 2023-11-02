
@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    CNContact * _internalContact;
    NSString * _key;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (id)labeledValue;
- (int)multiValueIdentifier;
- (id)sourceContact;
- (id)value;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)phoneticPropertiesMap;

- (id)phoneticProperty;
- (id)property;

@end
