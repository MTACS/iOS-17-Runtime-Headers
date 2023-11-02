
@interface _WKTextManipulationToken : NSObject {
    NSString * _content;
    bool  _excluded;
    NSString * _identifier;
    struct RetainPtr<NSDictionary<NSString *,id>> { 
        void *m_ptr; 
    }  _userInfo;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, readonly, copy) NSString *debugDescription;
@property (getter=isExcluded, nonatomic) bool excluded;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *safari_debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *safari_dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *safari_jsonRepresentation;
@property (nonatomic, readonly, copy) NSString *safari_privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSDictionary *safari_privacyPreservingMetadata;
@property (nonatomic, readonly) _LTTranslationRange *safari_translationRangeRepresentation;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_descriptionPreservingPrivacy:(bool)arg1;
- (id)content;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(bool)arg2;
- (bool)isExcluded;
- (void)setContent:(id)arg1;
- (void)setExcluded:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_tokenWithTranslationAlignmentRepresentation:(id)arg1;

- (id)_safari_descriptionPreservingPrivacy:(bool)arg1;
- (id)safari_debugDescription;
- (id)safari_dictionaryRepresentation;
- (bool)safari_isEqualToManipulationToken:(id)arg1 includingContentEquality:(bool)arg2;
- (id)safari_jsonRepresentation;
- (id)safari_privacyPreservingDescription;
- (id)safari_privacyPreservingMetadata;
- (id)safari_translationRangeRepresentation;

@end
