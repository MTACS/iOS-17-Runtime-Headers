
@interface _WKTextManipulationItem : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _identifier;
    bool  _isCrossSiteSubframe;
    bool  _isSubframe;
    struct RetainPtr<NSArray<_WKTextManipulationToken *>> { 
        void *m_ptr; 
    }  _tokens;
}

@property (nonatomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCrossSiteSubframe;
@property (nonatomic, readonly) bool isSubframe;
@property (nonatomic, readonly, copy) NSString *safari_debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *safari_dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *safari_jsonRepresentation;
@property (nonatomic, readonly, copy) NSString *safari_privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSArray *tokens;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_descriptionPreservingPrivacy:(bool)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 tokens:(id)arg2;
- (id)initWithIdentifier:(id)arg1 tokens:(id)arg2 isSubframe:(bool)arg3 isCrossSiteSubframe:(bool)arg4;
- (bool)isCrossSiteSubframe;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(bool)arg2;
- (bool)isSubframe;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_textManipulationItemWithTranslationResult:(id)arg1;

- (id)_safari_descriptionPreservingPrivacy:(bool)arg1;
- (id)safari_debugDescription;
- (id)safari_dictionaryRepresentation;
- (bool)safari_isEqualToManipulationItem:(id)arg1 includingContentEquality:(bool)arg2;
- (id)safari_jsonRepresentation;
- (id)safari_privacyPreservingDescription;
- (void)safari_updateTranslationRequest:(id)arg1;

@end
