
@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding> {
    NSError * _error;
    unsigned long long  _fileResponseCode;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long fileResponseCode;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)fileResponseCode;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileResponseCode:(unsigned long long)arg1 error:(id)arg2;

@end
