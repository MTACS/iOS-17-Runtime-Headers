
@interface _SWCPattern : NSObject <SWCRedactedDescription> {
    bool  _freeWhenDone;
    const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; } * _storage;
}

@property (getter=isBlocking, readonly) bool blocking;
@property (getter=isCaseSensitive, readonly) bool caseSensitive;
@property (getter=isPercentEncoded, readonly) bool percentEncoded;
@property (readonly) NSString *requiredEntitlement;
@property (nonatomic) const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; }*storage;

+ (id)_debug:(bool)arg1 descriptionOfStorage:(const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; }*)arg2 forObject:(id)arg3 redacted:(bool)arg4;
+ (id)_normalizedURLPath:(id)arg1;
+ (id)new;

- (id)_initWithPatternStorageNoCopy:(const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; }*)arg1 freeWhenDone:(bool)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const struct { unsigned int x1[8]; }*)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1 defaults:(id)arg2;
- (id)initWithPathPattern:(id)arg1 defaults:(id)arg2;
- (bool)isBlocking;
- (bool)isCaseSensitive;
- (bool)isEqual:(id)arg1;
- (bool)isPercentEncoded;
- (id)redactedDescription;
- (id)requiredEntitlement;
- (void)setStorage:(const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; }*)arg1;
- (const struct SWCPatternStorage { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 2; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; BOOL x8[0]; }*)storage;

@end
