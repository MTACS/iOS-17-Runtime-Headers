
@interface COMeshCommand : NSObject <NSSecureCoding>

@property (nonatomic, readonly) COMeshNode *sender;

+ (bool)supportsSecureCoding;

- (id)_sendingConstituent;
- (void)_setRapportOptions:(id)arg1;
- (void)_setSender:(id)arg1;
- (void)_setSendingConstituent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)rapportOptions;
- (unsigned long long)rapportTransactionID;
- (id)sender;

@end
