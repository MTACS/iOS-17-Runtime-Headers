
@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding> {
    bool  _aboveOtherContexts;
    NSString * _subtitle;
    NSString * _title;
}

@property (setter=_setAboveOtherContexts:, nonatomic) bool _aboveOtherContexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setSubtitle:, nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (setter=_setTitle:, nonatomic, retain) NSString *title;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (bool)_aboveOtherContexts;
- (void)_setAboveOtherContexts:(bool)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)subtitle;
- (id)title;

@end
