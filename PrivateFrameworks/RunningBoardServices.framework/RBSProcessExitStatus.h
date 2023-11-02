
@interface RBSProcessExitStatus : NSObject <NSCopying, NSSecureCoding, RBSXPCSecureCoding> {
    unsigned long long  _code;
    unsigned int  _domain;
}

@property (nonatomic, readonly) unsigned long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)statusWithDomain:(unsigned int)arg1 code:(unsigned long long)arg2;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (bool)_isVoluntary;
- (unsigned long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isCrash;
- (bool)isEqual:(id)arg1;
- (bool)isFairPlayFailure;
- (bool)isJetsam;
- (bool)isSignal;
- (bool)isValid;

@end
