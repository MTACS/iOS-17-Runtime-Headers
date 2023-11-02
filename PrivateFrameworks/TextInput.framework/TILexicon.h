
@interface TILexicon : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (id)lexiconWithEntries:(id)arg1;
+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
