
@interface EARVoiceCommandInterpretation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _arguments;
    NSString * _commandIdentifier;
    NSSet * _suiteIdentifiers;
    NSIndexSet * _verbIndexes;
}

@property (nonatomic, readonly, copy) NSArray *arguments;
@property (nonatomic, readonly, copy) NSString *commandIdentifier;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly, copy) NSSet *suiteIdentifiers;
@property (nonatomic, readonly, copy) NSIndexSet *verbIndexes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arguments;
- (id)commandIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandIdentifier:(id)arg1 suiteIdentifiers:(id)arg2 verbIndexes:(id)arg3 arguments:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)suiteIdentifiers;
- (id)verbIndexes;

@end
