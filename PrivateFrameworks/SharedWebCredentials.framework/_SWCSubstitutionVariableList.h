
@interface _SWCSubstitutionVariableList : NSObject <NSSecureCoding, SWCRedactedDescription> {
    struct SWCSubstitutionVariable { 
        unsigned int terminator : 1; 
        unsigned int includesEmptyValue : 1; 
        unsigned int allValuesAreOneCharLong : 1; 
        BOOL cStrings[0]; 
    }  _variables;
}

@property (readonly) unsigned long long count;

+ (id)cheapBuiltInSubstitutionVariableList;
+ (id)expensiveBuiltInSubstitutionVariableList;
+ (id)substitutionVariableListWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionDebug:(bool)arg1 redacted:(bool)arg2;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateSubstitutionVariablesWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;

@end
