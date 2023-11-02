
@interface NSFileProvidingResponse : NSObject <NSSecureCoding> {
    NSError * error;
    unsigned long long  providedItemRecursiveGenerationCount;
    NSString * sandboxToken;
}

@property (retain) NSError *error;
@property unsigned long long providedItemRecursiveGenerationCount;
@property (copy) NSString *sandboxToken;

+ (id)responseWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)providedItemRecursiveGenerationCount;
- (id)sandboxToken;
- (void)setError:(id)arg1;
- (void)setProvidedItemRecursiveGenerationCount:(unsigned long long)arg1;
- (void)setSandboxToken:(id)arg1;

@end
