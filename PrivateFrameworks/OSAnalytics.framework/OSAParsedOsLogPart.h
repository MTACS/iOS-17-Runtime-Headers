
@interface OSAParsedOsLogPart : NSObject {
    bool  _isArgument;
    bool  _isImmutable;
    NSString * _stringValue;
}

@property (readonly) bool isArgument;
@property (readonly) bool isImmutable;
@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIntegerArgumentStringValue:(id)arg1;
- (id)initWithLiteral:(id)arg1 isImmutable:(bool)arg2;
- (id)initWithStringArgument:(id)arg1 isImmutable:(bool)arg2;
- (bool)isArgument;
- (bool)isImmutable;
- (id)stringValue;

@end
