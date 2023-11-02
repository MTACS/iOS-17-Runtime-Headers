
@interface CKContainerID : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    long long  _environment;
    bool  _isAppleInternal;
    bool  _isTestContainer;
    long long  _specialContainerType;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long environment;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (nonatomic) bool isAppleInternal;
@property (nonatomic) bool isTestContainer;
@property (nonatomic) long long specialContainerType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKShortDescriptionRedact:(bool)arg1;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)equivalencyProperties;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isAppleInternal;
- (bool)isEqual:(id)arg1;
- (bool)isTestContainer;
- (id)redactedDescription;
- (id)representativeDataclass;
- (void)setIsAppleInternal:(bool)arg1;
- (void)setIsTestContainer:(bool)arg1;
- (void)setSpecialContainerType:(long long)arg1;
- (long long)specialContainerType;
- (id)sqliteRepresentation;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (id)hmbDescription;

@end
