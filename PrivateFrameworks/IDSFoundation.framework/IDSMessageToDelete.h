
@interface IDSMessageToDelete : NSObject {
    NSString * _alternateGUID;
    unsigned int  _dataProtectionClass;
    NSString * _guid;
}

@property (setter=setAlternateGUID:, retain) NSString *alternateGUID;
@property unsigned int dataProtectionClass;
@property (setter=setGUID:, retain) NSString *guid;

- (void).cxx_destruct;
- (id)alternateGUID;
- (unsigned int)dataProtectionClass;
- (id)guid;
- (void)setAlternateGUID:(id)arg1;
- (void)setDataProtectionClass:(unsigned int)arg1;
- (void)setGUID:(id)arg1;

@end
