
@interface SURollbackSuggestionProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _processID;
    NSString * _processName;
    NSError * _rollbackSuggestionError;
}

@property (nonatomic, retain) NSString *processID;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSError *rollbackSuggestionError;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcessID:(id)arg1;
- (id)processID;
- (id)processName;
- (id)rollbackSuggestionError;
- (void)setProcessID:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRollbackSuggestionError:(id)arg1;

@end
