
@interface NSPersonNameComponents : NSObject <CKPropertiesDescription, MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding> {
    id  _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *familyName;
@property (copy) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(bool)arg1;
+ (id)_allComponents;
+ (id)_allProperties;
+ (bool)supportsSecureCoding;

- (bool)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponents:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneticRepresentation;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneticRepresentation:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKShortDescriptionRedact:(bool)arg1;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)componentsForContact:(id)arg1;
+ (id)descriptorForUsedKeys;

- (void)overrideComponentsInContact:(id)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_formattedName;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_formattedName;
- (id)br_formattedNameWithNonBreakingSpaces;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (bool)isGivenNameFirst;

// Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform

- (id)autonamingFeedbackStandardizedRepresentation;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_componentsForSearchHighlighting;
- (id)ic_localizedNameWithDefaultFormattingStyle;

@end
