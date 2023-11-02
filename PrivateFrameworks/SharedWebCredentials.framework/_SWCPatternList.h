
@interface _SWCPatternList : NSObject <NSSecureCoding, SWCRedactedDescription> {
    struct SWCPatternStorage { 
        unsigned int blocking : 1; 
        unsigned int hasPath : 1; 
        unsigned int hasFragment : 1; 
        unsigned int query : 2; 
        unsigned int caseInsensitive : 1; 
        unsigned int notPercentEncoded : 1; 
        unsigned int hasRequiredEntitlement : 1; 
        BOOL cStrings[0]; 
    }  _storage;
}

@property (readonly) unsigned long long count;

+ (id)patternListWithArray:(id)arg1;
+ (id)patternListWithDetailsDictionary:(id)arg1;
+ (id)patternListWithDetailsDictionary:(id)arg1 defaults:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)_descriptionDebug:(bool)arg1 redacted:(bool)arg2;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePatternsWithBlock:(id /* block */)arg1;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const struct { unsigned int x1[8]; }*)arg3 matchingPattern:(id*)arg4 index:(unsigned long long*)arg5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;

@end
