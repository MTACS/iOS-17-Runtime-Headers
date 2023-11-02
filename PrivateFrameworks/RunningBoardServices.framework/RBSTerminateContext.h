
@interface RBSTerminateContext : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSDictionary * _additionalPayload;
    NSArray * _attributes;
    unsigned long long  _exceptionCode;
    unsigned int  _exceptionDomain;
    NSString * _explanation;
    unsigned char  _maximumTerminationResistance;
    bool  _preventIfBeingDebugged;
    unsigned long long  _reportType;
}

@property (nonatomic, copy) NSDictionary *additionalPayload;
@property (nonatomic, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long exceptionCode;
@property (nonatomic) unsigned int exceptionDomain;
@property (nonatomic, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char maximumTerminationResistance;
@property (nonatomic) bool preventIfBeingDebugged;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic, readonly) bool shouldTerminatePlugIns;
@property (readonly) Class superclass;

+ (id)defaultContextWithExplanation:(id)arg1;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)additionalPayload;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)exceptionCode;
- (unsigned int)exceptionDomain;
- (id)explanation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExplanation:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)maximumTerminationResistance;
- (bool)preventIfBeingDebugged;
- (unsigned long long)reportType;
- (void)setAdditionalPayload:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setExceptionCode:(unsigned long long)arg1;
- (void)setExceptionDomain:(unsigned int)arg1;
- (void)setExplanation:(id)arg1;
- (void)setMaximumTerminationResistance:(unsigned char)arg1;
- (void)setPreventIfBeingDebugged:(bool)arg1;
- (void)setReportType:(unsigned long long)arg1;
- (bool)shouldTerminatePlugIns;

@end
