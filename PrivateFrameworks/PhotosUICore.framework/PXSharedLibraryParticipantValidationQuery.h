
@interface PXSharedLibraryParticipantValidationQuery : NSObject {
    NSString * _address;
    bool  _isValid;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic) bool isValid;

- (void).cxx_destruct;
- (id)address;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)setIsValid:(bool)arg1;

@end
