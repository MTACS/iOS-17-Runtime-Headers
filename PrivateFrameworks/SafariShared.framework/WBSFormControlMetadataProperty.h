
@interface WBSFormControlMetadataProperty : NSObject {
    union { 
        struct { 
            unsigned int disallowsAutocomplete : 1; 
            unsigned int claimsToBeCurrentPasswordViaAutocompleteAttribute : 1; 
            unsigned int claimsToBeNewPasswordViaAutocompleteAttribute : 1; 
            unsigned int claimsToBeUsernameViaAutocompleteAttribute : 1; 
            unsigned int looksLikeCreditCardCardholderField : 1; 
            unsigned int looksLikeCreditCardCompositeExpirationDateField : 1; 
            unsigned int looksLikeCreditCardNumberField : 1; 
            unsigned int looksLikeCreditCardSecurityCodeField : 1; 
            unsigned int looksLikeCreditCardTypeField : 1; 
            unsigned int looksLikeDayField : 1; 
            unsigned int looksLikeMonthField : 1; 
            unsigned int looksLikeYearField : 1; 
            unsigned int looksLikeIgnoredDataTypeField : 1; 
            unsigned int looksLikePasswordCredentialField : 1; 
            unsigned int looksLikeOneTimeCodeField : 1; 
            unsigned int oneTimeCodeIsEligibleForAutomaticLogin : 1; 
            unsigned int visible : 1; 
            unsigned int active : 1; 
            unsigned int disabled : 1; 
            unsigned int readOnly : 1; 
            unsigned int textField : 1; 
            unsigned int secureTextField : 1; 
            unsigned int autoFilledTextField : 1; 
            unsigned int userEditedTextField : 1; 
            unsigned int labeledUsernameField : 1; 
        } flags; 
        long long asInteger; 
    }  flagMask;
    struct objc_ivar { } * ivar;
    int (* processObject;
    long long  type;
}

@end
