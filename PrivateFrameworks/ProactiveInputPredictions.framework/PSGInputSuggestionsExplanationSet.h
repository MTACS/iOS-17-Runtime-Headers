
@interface PSGInputSuggestionsExplanationSet : NSObject <NSCopying, NSSecureCoding> {
    _PASLock * _lock;
}

+ (id)_stringFromExplanation:(unsigned char)arg1;
+ (id)stringFromExplanationCode:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_pushExplanationCode:(unsigned short)arg1 namespaceId:(unsigned short)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateExplanationCodeWithBlock:(id /* block */)arg1;
- (bool)hasContactsServingError;
- (bool)hasPETLoggingData;
- (bool)hasTriggeringXPCTimeout;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExplanationSet:(id)arg1;
- (void)pushInternalExplanationCode:(unsigned int)arg1;
- (void)pushPortraitExplanationCode:(unsigned char)arg1;

@end
