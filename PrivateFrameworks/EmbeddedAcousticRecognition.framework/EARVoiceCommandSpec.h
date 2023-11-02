
@interface EARVoiceCommandSpec : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _fstRelativePaths;
    NSString * _fstSymbol;
    NSString * _identifier;
    BOOL  _valence;
}

@property (nonatomic, readonly, copy) NSSet *fstRelativePaths;
@property (nonatomic, readonly) NSString *fstSymbol;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BOOL valence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fstRelativePaths;
- (id)fstSymbol;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 valence:(BOOL)arg2 fstRelativePaths:(id)arg3 fstSymbol:(id)arg4;
- (id)initWithPlistJSONDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plistJSONDictionary;
- (BOOL)valence;

@end
